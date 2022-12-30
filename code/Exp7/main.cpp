#include <bits/stdc++.h>
#include "../basicFunction.h"
#include "djikstra.h"
#include "floydWarshal.h"

using namespace std;

int main() {
    printinfo();
    //--------------------------djikstra algorithm-------------------------------------------------//
    cout << "\nDjikstra Algorithm\n";
	int v = 9;
	Graph g(v);

	// making graph
	g.addEdge(0, 1, 4);
	g.addEdge(0, 7, 8);
	g.addEdge(1, 2, 8);
	g.addEdge(1, 7, 11);
	g.addEdge(2, 3, 7);
	g.addEdge(2, 8, 2);
	g.addEdge(2, 5, 4);
	g.addEdge(3, 4, 9);
	g.addEdge(3, 5, 14);
	g.addEdge(4, 5, 10);
	g.addEdge(5, 6, 2);
	g.addEdge(6, 7, 1);
	g.addEdge(6, 8, 6);
	g.addEdge(7, 8, 7);

	g.shortestPath(0);

    //-----------------------------FloydWarshal Algorithm------------------------------//
    cout << "\n FloydWarshal Algorithm\n";

	/* Let us create the following weighted graph
			10
	(0)------->(3)
		|	 /|\
	5 |	 |
		|	 | 1
	\|/	 |
	(1)------->(2)
			3	 */
	int graph[Vert][Vert] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };

	// Function call
	floydWarshall(graph);
	return 0;
}