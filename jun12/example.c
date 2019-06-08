#include "stdio.h"
#include "stdlib.h"

void if_elseif_else() {
  if (1 > 2) {
    printf("1 is greater than 2\n");
  }
  else if (1 == 2) {
    printf("1 is equal to 2\n");
  }
  else {
    printf("1 is less than 2\n");
  }
}

void if_if() {
  if (1 == 1) {
    printf("Block 1\n");
  }
  if (2 == 2) {
    printf("Block 2\n");
  }
  if (1 == 1) {
    printf("Block A\n");
  }
  else if (2 == 2) {
    printf("Block B\n");
  }
}

void switch_case(int i) {
  switch(i) {
    case 1:
      printf("First case\n");
      break;
    case 2:
      printf("Second case\n");
      break;
    case 3:
      printf("It's important to put break at end of each case!\n");
    default:
      printf("Input did not match any cases\n");
  }
}

int main() {
  if_elseif_else();
  if_if();
  switch_case(1);
  switch_case(2);
  switch_case(3);
  switch_case(100);
}