#include <bits/stdc++.h>
#include "../basicFunction.h"
#include "0_1knapsackProblem.h"

using namespace std;

int main() {
    printinfo();
    cout << "\nThe maximum value by 0/1knapsack method\n";
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n);
	return 0;
}