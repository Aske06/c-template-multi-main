#include <stddef.h>
#include <stdio.h>

constexpr size_t N = 10;
int arr1[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1},
    arr2[N] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5},
    arr3[N] = {-1, -1, 1, 2, 2, -9, 1},
    arr4[N] = {5, 3, 0, 9, 4, 1, 8, 7, 6, 2};

void swapElements(size_t element1, size_t element2, int arr[]) {
  int temp = 0;

  temp = arr[element1];
  arr[element1] = arr[element2];
  arr[element2] = temp;
}

void selectionSort(size_t startingElement, int arr[]) {
  size_t smallestElement = startingElement;

  // Find smallest element
  for (size_t i = startingElement; i < N; i++) {
    if (arr[i] < arr[smallestElement])
      smallestElement = i;
  }
  swapElements(startingElement, smallestElement, arr);

  // Increment and check if done, if not, recursion
  if (++startingElement >= N - 1) return;
  selectionSort(startingElement, arr);
}

void print_array(int arr[]) {
  for (size_t i = 0; i < N; ++i)
    printf("%2d, ", arr[i]);
  puts("");
}

int main() {
  selectionSort(0,arr1);
  print_array(arr1);

  selectionSort(0, arr2);
  print_array(arr2);

  selectionSort(0, arr3);
  print_array(arr3);

  selectionSort(0, arr4);
  print_array(arr4);
}