int ls(int *arr, int size, int key) {
    int index{};
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == key) {
            index = i; 
        }
    }
    std::cout << "Element found at index: " << index << '\n';
    return index;
}