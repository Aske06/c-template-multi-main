#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  puts("<<-1 to end program>>\nEnter number: ");
  scanf("%d", &n);

  while (n != -1) {
    if (isPrime(n))
      printf("\n%d is a prime number!\n", n);
    else
      printf("\n%d is NOT a prime number!\n", n);
    puts("Enter number: ");
    scanf("%d", &n);
  }
}