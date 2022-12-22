#include <iostream>
#include <string>
#include "linearSearch.h"
#include "binarySearch.h"
#include "../basicFunction.h"

using namespace std;

int main() {
    printinfo("Shivam Singh", "07313302720", "CSE-5A");
    //---------------------------- Taking User Input-----------------------------------------------------//
    int size = sizeInput();
    int key = keyInput();
    int *array = new int[size+1];
    array = takeInputArray(size);
    printArray(array, size);
    cout << '\n';
    //-----------------------------Linear Search--------------------------------------------------------//
    cout << "Result of Linear Search\n";
    int resultLS{ls(array, size, key)};
    printArray(array, size);
    keyFound(resultLS);
    cout << "\n";
    //-----------------------------Binary Search-------------------------------------------------------//
    cout << "Result of Binary Search\n";
    int resultBS{bs(array,key,0,size-1)};
    printArray(array,size);
    keyFound(resultBS);
    cout << "\n";
    //---------------------------------End of Code-----------------------------------------------------//


}
