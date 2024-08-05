#include <stdio.h>

#define TAX_MULTIPLIER 1.05f

int main(void) {
  float amount;

  printf("Please enter the dollar and cent amount:\n");
  scanf("%f", &amount);
  float newAmount = amount * TAX_MULTIPLIER;
  printf("Your taxed amount is: %.2f", newAmount);
}
