#include <iostream>
#include <string>
#include "linearSearch.h"
#include "binarySearch.h"
#include "../basicFunction.h"

using namespace std;

int main() {
    printinfo("Shivam Singh", "07313302720", "CSE-5A");
    int size = sizeInput();
    int *array = new int[size+1];
    array = takeInputArray(size);
    ls(array,size,3);
    printArray(array, size);
}
