#include <string>
#include <iostream>
#define endl '\n'

using namespace std;

void printinfo() {
    cout << "Shivam Singh\n07313302720\nCSE-5A\n"; 
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
    cout << "Enter the elements of array separated by space: "; 
    for(int i = 0 ; i < size ; i++) {
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

void keyFound(int result) {
    if(result == -1) {
        cout << "Key not found\n";
    } else {
        cout << "Key found at index: " << result << '\n';
    }
}
int keyInput() {
    int key{};
    cout << "Enter the element you want to find: ";
    cin >> key;
    return key;
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}