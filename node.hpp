#include <vector>

class Node
{
private:
	char Name = ' ';
	int id = -1;
	int cost = 99;
	std::vector<Node *> next;

	bool found = false;
	int link_from = 0;

	Node* LinkFrom;

public:
	Node()
	{
	}

	Node(char c, int j)
	{
		Name = c;
		id = j;
	}

	void setErea(int i)
	{
		for (int j = 0; j < i; j++)
			next.push_back(0);
	}

	void addNext(Node *n)
	{
		next[n->getID()] = n;
	}

	std::vector<Node *> getNext()
	{
		return next;
	}

	int getID()
	{
		return id;
	}

	char getName()
	{
		return Name;
	}

	void setCost(int c)
	{
		cost = c;
	}

	int getCost()
	{
		return cost;
	}

	void setFound(bool b)
	{
		found = b;
	}

	bool getFound()
	{
		return found;
	}

	void setLinkFrom(int i)
	{
		link_from = i;
	}

	int getLinkFrom()
	{
		return link_from;
	}

	int getNextSize()
	{
		int count = 0;
		for (auto p = next.begin(); p != next.end(); p++)
		{
			if ((*p) == NULL)
				continue;
			else
				count++;
		}

		return count - 1;
	}

	std::vector<Node *>::iterator getFistPostion()
	{
		auto i = next.begin();
		for (; i != next.end(); i++)
		{
			if ((*i) == NULL)
				continue;
			else
				break;
		}
		return i;
	}
};
