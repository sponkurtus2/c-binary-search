#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high) {
  if (high > low) {
    int mid = (low + high) / 2;

    // If at mid, return mid
    if (arr[mid] == x) {
      return mid;
    }

    // Search on left
    if (arr[mid] > x) {
      return binarySearch(arr, x, low, mid - 1);
    }

    // Search on right
    if (x > arr[mid]) {
      return binarySearch(arr, x, mid - 1, high);
    }
  }
  return -1;
}

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
  int x = 7;
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  int low = arr[0];
  int high = arr[arrSize - 1];

  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    printf("p -> %d, value -> %d\n", i, arr[i]);
  }

  printf("Arr size: %d\n", arrSize);
  printf("Arr first element: %d\n", low);
  printf("Arr last element: %d\n", high);

  printf("Objective: %d, found at position -> %d\n", x,
         binarySearch(arr, x, low, high));

  return 0;
}
