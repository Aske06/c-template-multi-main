#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

constexpr int SIZE = 11;
const int MAX_VAL = 12;
const int MIN_VAL = 2;
const int ROLLS = 50000;
int sumFreqArray[SIZE];

int main() {
  srand(time(nullptr));

  for (int i = 0; i < ROLLS; i++) {
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int sum = die1 + die2;
    ++sumFreqArray[sum - 2];
  }

  printf(" ∑: Occurrence\n");

  for (size_t i = 0; i < SIZE; i++) {
    printf("%2zu: %d\n", i + 2, sumFreqArray[i]);
  }
}