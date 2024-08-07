#include <stdio.h>

int main(void) {
  int gs1_prefix, group_identifier, pub_code, item_num, check_digit;

  printf("Enter ISBN:");
  scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &pub_code, &item_num,
        &check_digit);

  printf("GS1 prefix: %.3d\n", gs1_prefix);
  printf("Group identifier: %.1d\n", group_identifier);
  printf("Publisher code: %.3d\n", pub_code);
  printf("Item number: %.5d\n", item_num);
  printf("Check digit: %.3d\n ", check_digit);

  return 0;
}
