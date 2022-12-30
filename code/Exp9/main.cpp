#include <bits/stdc++.h>
#include "../basicFunction.h"
#include "LCS.h"

using namespace std;

int main() {
    printinfo();
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";
    cout << "String X == " << X << '\n';
    cout << "String Y == " << Y << '\n'; 
	
	int m = strlen(X);
	int n = strlen(Y);
	
	cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ;
	
	return 0;
}