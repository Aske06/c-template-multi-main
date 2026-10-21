#include <stdio.h>

int main() {
  int width;

  printf("Enter width: ");
  scanf("%d", &width);
  printf("\n");

  for (int i = 0; i <= width; i++) {

    for (int j = 0; j <= width; j++) {
      if (j == i || j == width - i) {
        printf("X");
      } else {
        printf(" ");
      }
    }
    puts("");
  }
}