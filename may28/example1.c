#include <stdio.h>
#include <stdlib.h>

void pass_by_reference(int* test) {
  *test = 5;
}

void pass_by_value(int test) {
  test = 5;
}

int main() {
  int test = 4;
  pass_by_value(test);
  printf("By value: %d\n", test);
  pass_by_reference(&test);
  printf("By reference: %d\n", test);
}