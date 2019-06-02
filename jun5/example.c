#include "stdio.h"
#include "string.h"

#define PI 3.14159265358979323846264338327950288419716939937510

int main() {
  float a = PI/1.9999999f;
  double b = PI/1.9999999;
  char* format_string_attack = "Hello %x %x\n";
  printf(format_string_attack);
  printf("%s\n", format_string_attack);

  printf("Int:    %d\n", 5);
  printf("Int:    |%5d|%-5d|\n", 5, 5);
  printf("Int:    |%-5d|%5d|\n\n", 5, 10);

  printf("Float:  %f\n", a);
  printf("Double: %lf\n\n", b);

  printf("Float Precise:  %.18f\n", a);
  printf("Double Precise: %.18lf\n\n", b);

  printf("Combining: |%5.2lf|\n", b);
  printf("Combining: |%-5.2lf|\n", b);
  printf("Overflow:  |%5.5lf|\n", b);
}