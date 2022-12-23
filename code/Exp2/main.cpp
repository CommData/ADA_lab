#include <iostream>
#include "../basicFunction.h"
#include "insertionSort.h"
#include "selectionSort.h"

using namespace std;

int main() {
    printinfo();
    //--------------------------------------Insertion Sort-----------------------------------------------------------//
    int size = sizeInput();
    int *array = new int[size+1];
    array = takeInputArray(size);
    printArray(array, size);
    insertSort(array, size);
    cout << "(Insertion Sort)Sorted Array is: ";
    printArray(array,size);
    //-------------------------------------selection Sort------------------------------------------------------------//
    int size1 = sizeInput();
    int *array1 = new int[size1+1];
    array1 = takeInputArray(size1);
    printArray(array1,size1);
    selectSort(array1,size1);
    cout << "(Selection Sort)Sorted Array is: ";
    printArray(array1, size1);

    return 0;
}