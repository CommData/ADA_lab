#include <iostream>
#include "../basicFunction.h"
#include "bubbleSort.h"
#include "radixSort.h"

using namespace std;

int main() {
    printinfo();
    //--------------------------------------Bubble Sort--------------------------------------------------//
    int size{sizeInput()};
    int *array = new int[size+1];
    array = takeInputArray(size);
    printArray(array,size);
    bubbleSort(array,size);
    cout << "(Bubble Sort)Sorted Array is: ";
    printArray(array,size);
    //-------------------------------------Radix Sort---------------------------------------------------//
    int size1{sizeInput()};
    int *array1 = new int[size1+1];
    array1 = takeInputArray(size1);
    printArray(array1,size1);
    radixsort(array1,size1);
    cout << "(Radix Sort)Sorted Array is: ";
    printArray(array1,size1);
    return 0;
}