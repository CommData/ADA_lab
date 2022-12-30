#include <bits/stdc++.h>
#include "../basicFunction.h"
#include "KnuthMorrisPrath.h"

using namespace std;

int main() {
    printinfo();
	char txt[] = "ABABDABACDABABCABAB";
	char pat[] = "ABABCABAB";
    cout << "The text is: " << txt << '\n';
    cout << "The pattern is: " << pat << '\n';
	KMPSearch(pat, txt);
	return 0;
}