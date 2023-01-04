#include <algorithm>
int bs(int array[], int x, int low, int high) {
  std::sort(array, array+(high+1));
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return bs(array, x, low, mid - 1);

    // Search the right half
    return bs(array, x, mid + 1, high);
  }

  return -1;
}
