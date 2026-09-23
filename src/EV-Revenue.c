#include <stdio.h>

int main() {
  double revenue = 0;

  puts("Enter revenue (-1 to end): ");
  scanf("%lf", &revenue); // First revenue insert

  while (revenue != -1) {
    revenue = 200 + 0.05 * revenue; // Revenue to homeowner
    printf("\nRevenue for homeowner this week is: %.2f\n", revenue);
    puts("Enter revenue (-1 to end): ");
    scanf("%lf", &revenue);
  }
}