#include <iostream>
#include "../basicFunction.h"
#include "mergeSort.h"
#include "quickSort.h"

using namespace std;

int main() {
    printinfo();
    //------------------------------------------Merge Sort----------------------------------------//
     int size{sizeInput()};
    int *array = new int[size+1];
    array = takeInputArray(size);
    printArray(array,size);
    mergeSort(array,0,size-1);
    cout << "(Merge Sort)Sorted Array is: ";
    printArray(array,size);
    //-----------------------------------------Quick Sort-----------------------------------------//
    int size1{sizeInput()};
    int *array1 = new int[size1+1];
    array1 = takeInputArray(size1);
    printArray(array1,size1);
    quickSort(array1,0,size1-1);
    cout << "(Quick Sort)Sorted Array is: ";
    printArray(array1,size1);
    return 0;    
}