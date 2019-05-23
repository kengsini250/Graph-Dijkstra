#include "graph.hpp"

int main()
{
	GRAPH Graph(12, 22);

	Node a('A', 0);
	Node b('B', 1);
	Node c('C', 2);
	Node d('D', 3);
	Node e('E', 4);
	Node f('F', 5);
	Node g('G', 6);
	Node h('H', 7);
	Node i('I', 8);
	Node j('J', 9);
	Node k('K', 10);
	Node l('L', 11);

	Graph.addVertex(&a);
	Graph.addVertex(&b);
	Graph.addVertex(&c);
	Graph.addVertex(&d);
	Graph.addVertex(&e);
	Graph.addVertex(&f);
	Graph.addVertex(&g);
	Graph.addVertex(&h);
	Graph.addVertex(&i);
	Graph.addVertex(&j);
	Graph.addVertex(&k);
	Graph.addVertex(&l);

	Graph.connectGraph(&a, &b, 4);
	Graph.connectGraph(&a, &c, 3);
	Graph.connectGraph(&a, &d, 5);
	Graph.connectGraph(&b, &c, 2);
	Graph.connectGraph(&d, &c, 2);
	Graph.connectGraph(&b, &e, 3);
	Graph.connectGraph(&c, &e, 1);
	Graph.connectGraph(&c, &f, 7);
	Graph.connectGraph(&c, &g, 3);
	Graph.connectGraph(&e, &f, 4);
	Graph.connectGraph(&g, &f, 3);
	Graph.connectGraph(&g, &h, 5);
	Graph.connectGraph(&f, &i, 3);
	Graph.connectGraph(&f, &j, 5);
	Graph.connectGraph(&f, &k, 6);
	Graph.connectGraph(&f, &h, 2);
	Graph.connectGraph(&h, &k, 4);
	Graph.connectGraph(&i, &j, 2);
	Graph.connectGraph(&j, &k, 5);
	Graph.connectGraph(&i, &l, 5);
	Graph.connectGraph(&j, &l, 4);
	Graph.connectGraph(&k, &l, 1);

	Graph.displayGraph();
	std::cout << "\n\n\nDijkstra\n\n";
	Graph.Dijkstra();
}
