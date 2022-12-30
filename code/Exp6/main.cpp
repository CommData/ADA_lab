#include <bits/stdc++.h>
#include "../basicFunction.h"
#include "primsAlgorithm.h"
#include "kruskalAlgorithm.h"

using namespace std;


int main() {
    printinfo();
    //---------------------------------Prim's Algorithm-------------------------------//
    cout << "\nPrim's MST Algorithms\n";
	/*  Prim's MST for the following graph
		2 3
	(0)--(1)--(2)
	| / \ |
	6| 8/ \5 |7
	| / \ |
	(3)-------(4)
			9	 */
	int graph[V][V] = { { 0, 2, 0, 6, 0 },
						{ 2, 0, 3, 8, 5 },
						{ 0, 3, 0, 0, 7 },
						{ 6, 8, 0, 0, 9 },
						{ 0, 5, 7, 9, 0 } };

	// Print the solution
	primMST(graph);

    //------------------------------Kruskal's Algorithm---------------------------------//
    cout << "\nKruskal's MST Algorithms\n";

	/* Let us create following weighted graph
				10
			0--------1
			| \	 |
			6| 5\ |15
			|	 \ |
			2--------3
				4	 */
	Graph g(4);
	g.addEdge(0, 1, 10);
	g.addEdge(1, 3, 15);
	g.addEdge(2, 3, 4);
	g.addEdge(2, 0, 6);
	g.addEdge(0, 3, 5);

	// Function call
	g.kruskals_mst();

}