#include <stdio.h>

constexpr size_t N = 5, M = 2;
int arr1[N] = {1, 2, 3, 4, 5};
int arr2[N][M] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

int main() {
  printf("3rd element times 2: %d\n", arr1[2] * 2);
  int sum;
  for (size_t i = 0; i < N; i++) {
    sum += arr1[i];
  }
  printf("Sum of arr1: %d\n\n", sum);

  for (size_t i = 0; i < N; i++) {
    arr2[i][1] = -42;
  }
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      printf("%2d ", arr2[i][j]);
    }
    puts("");
  }
  int min = 0;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      if (arr2[i][j] < min)
        min = arr2[i][j];
    }
  }
  printf("Min value is: %d\n", min);
}