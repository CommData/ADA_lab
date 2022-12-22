#include <string>
#include <iostream>
#define endl '\n'

using namespace std;

void printinfo(string name, string enrollNo, string secinfo) {
    cout << name << '\n' << enrollNo << '\n' << secinfo << '\n';
} 

void printArray(int arr[], int size) {
    cout << "The entered array is: ";
    for(int i = 0; i < size ; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int* takeInputArray (int size) {
    int *tempArray = new int[size+1];
    for(int i = 0 ; i < size ; i++) {
        cout << "Enter the " << i << "th element of the array:";
        cin >> tempArray[i];
    }
    return tempArray;
}

int sizeInput() {
    int size{};
    cout << "Enter the size of the array: ";
    cin >> size;
    return size;
}