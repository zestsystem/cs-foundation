#include <stdio.h>

int main(void) {
  int m, n;
  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  for (; n > 0;) {
    int r = m % n;
    m = n;
    n = r;
  }

  printf("Greatest common divisor %d\n", m);
  return 0;
}
