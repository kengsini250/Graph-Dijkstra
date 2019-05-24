#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "node.hpp"

#define _MAX 99

class GRAPH
{
public:
	GRAPH()
	{
	}

	~GRAPH()
	{
		for (int i = 0; i < vertex; i++)
		{
			delete[] weight[i];
			weight[i] = NULL;
		}
		delete[] weight;
		weight = NULL;
	}

	GRAPH(int v, int e)
	{
		vertex = v;
		edge = e;
		for (int i = 0; i < vertex; i++)
		{
			cost.push_back(99);
			found.push_back(false);
			//LinkFrom.push_back(0);
		}
		for (int i = 0; i < vertex; i++)
			LinkFrom.push_back('-');

		weight = new int *[vertex];
		for (int i = 0; i < vertex; i++)
			weight[i] = new int[vertex];

		for (int i = 0; i < vertex; i++)
			for (int j = 0; j < vertex; j++)
				weight[i][j] = _MAX;
	}
	void addVertex(Node *v)
	{
		v->setErea(vertex);
		node.push_back(v);
	}
	void connectGraph(Node *v1, Node *v2)
	{
		node[v1->getID()]->addNext(v2);
	}
	void connectGraph(Node *v1, Node *v2, int w)
	{
		node[v1->getID()]->addNext(v2);
		weight[v1->getID()][v2->getID()] = w;
	}

	void displayGraph()
	{
		std::cout << "node size : " << node.size() << '\n';
		for (int i = 0; i < node.size(); i++)
		{
			std::cout << "\n     name : " << node[i]->getName() << "----> Next\n";

			std::vector<Node *> next = node[i]->getNext();
			std::vector<Node *>::iterator p = next.begin();

			for (; p != next.end(); p++)
			{
				if ((*p) == NULL)
					continue;
				else
					std::cout << "---"
						  << " weight : " << getWeight(node[i]->getID(), (*p)->getID()) << "  ---  " << (*p)->getName() << " \n";
			}
		}
	}

	void Dijkstra()
	{
		int count = 0;
		int minCost = 99;
		Node *minNode; //= new Node;
#ifdef DEBUG
		displayWeight();
#endif
		cost[node[count]->getID()] = 0;
		while ((cost[count] <= minCost) && (found[count] == false))
		{
			minNode = node[count];
			found[count] = true;
			auto next = minNode->getNext(); //B,C,D
			int temp = _MAX;
			int Distance;
			auto p = next.begin();
			for (; p != next.end(); p++)
			{
				if ((*p) == NULL)
					continue;
				else
				{
					cost[(*p)->getID()] = getWeight(count,(*p)->getID());
					LinkFrom[(*p)->getID()] = node[count]->getName(); 
					if (getWeight(count, (*p)->getID()) <= temp)
					{
						temp = getWeight(count, (*p)->getID());
						cost[(*p)->getID()] = temp; // 4 3 5
						Distance = std::distance(std::begin(next), p);
						LinkFrom[(*p)->getID()] = node[count]->getName(); // A A A
					}
				}
			}
#ifdef DEBUG
			display();
#endif
			count = Distance;
		} //while
	}

private:
	int vertex, edge;
	std::vector<Node *> node;

	std::vector<int> cost;
	std::vector<bool> found;
	std::vector<char> LinkFrom;

	int **weight;

	//A,C,E,F,K,L
	std::vector<Node *> Dijkstra_end;

	int getWeight(int i, int j)
	{
		return weight[i][j];
	}

	//-----------------debug
	void display()
	{
		std::cout << std::left;

		std::cout << "\n\n==============DEBUG=====================\n\n";
		std::cout << "Node  : ";
		for (int i = 0; i < vertex; i++)
			std::cout << std::setw(5) << node[i]->getName();
		std::cout << '\n';

		std::cout << "Cost  : ";
		for (int i = 0; i < vertex; i++)
			std::cout << std::setw(5) << cost[i];
		std::cout << '\n';

		std::cout << "Found : ";
		for (int i = 0; i < vertex; i++)
			std::cout << std::setw(5) << found[i];
		std::cout << '\n';

		std::cout << "From  : ";
		for (int i = 0; i < vertex; i++)
			std::cout << std::setw(5) << LinkFrom[i];
		std::cout << '\n';
		std::cout << "\n==============DEBUG=====================\n\n";
	}

	void displayWeight()
	{
		std::cout << std::left;
		std::cout << "WEIGHT : \n";
		for (int i = 0; i < vertex; i++)
		{
			for (int j = 0; j < vertex; j++)
			{
				std::cout << std::setw(3) << weight[i][j];
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}
	//------------------debug
};