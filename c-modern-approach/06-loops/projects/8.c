#include <stdio.h>

int main(void) {
  int i, days, start;
  printf("Enter number of days in a month: ");
  scanf("%d", &days);

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  for (i = 1; i < start; i++) {
    printf("   ");
  }

  for (i = 1; i <= days; i++) {
    printf("%3d ", i);

    if ((start + i - 1) % 7 == 0) {
      printf("\n");
    }
  }

  return 0;
}
