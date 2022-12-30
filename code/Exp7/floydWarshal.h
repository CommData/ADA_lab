#define Vert 4
#define INF1 1061109567
void printSolution(int dist[][Vert]);
void floydWarshall(int dist[][Vert])
{
	int i, j, k;
	for (k = 0; k < Vert; k++) {
		for (i = 0; i < Vert; i++) {
			for (j = 0; j < Vert; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF1
						&& dist[i][k] != INF1))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	printSolution(dist);
}
void printSolution(int dist[][Vert])
{
	cout << "The following matrix shows the shortest "
			"distances"
			" between every pair of vertices \n";
	for (int i = 0; i < Vert; i++) {
		for (int j = 0; j < Vert; j++) {
			if (dist[i][j] == INF1)
				cout << "INF"
					<< " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << endl;
	}
}
