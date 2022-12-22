int ls(int *arr, int size, int key) {
    int index{-1};
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == key) {
            index = i; 
        }
    }
    return index;
}