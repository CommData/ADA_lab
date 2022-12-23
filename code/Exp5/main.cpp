#include <iostream>
#include <vector>
#include "../basicFunction.h"
#include "strassensMatrixMultiplication.h"

using namespace std;

int main() {
    printinfo();
    vector<vector<int>> matrixA =  {{2, 2, 3, 1},{1, 4, 1, 2},{2, 3, 1, 1}, {1, 3, 1, 2}}; 
    cout << "Matrix A ==> \n";
    printMatrix(matrixA);
    cout << '\n';
    vector<vector<int>> matrixB = {{2, 1, 2, 1},{3, 1, 2, 1},{3, 2, 1, 1}, {1, 4, 3, 2}};
    cout << "Matrix B ==> \n";
    printMatrix(matrixB);
    cout << '\n';
    vector<vector<int>> matrixResult(strassen_multiplication(matrixA, matrixB));
    cout << "The result of Strassen matrix Multiplication is: \n";
    printMatrix(matrixResult);
    return 0;
}