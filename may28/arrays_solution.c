#include <stdio.h>
#include <stdlib.h>
#define MAX 20

/*
Prompt user for size of array they want to make in
the proper range and store result in size

Example Output:

Enter size of array (in range [1, 20]): 3

*/
void get_size(int* size) {
  char user_input[5] = {0};
  do {
    printf("Enter size of array (in range [1, %d]): ", MAX);
    fflush(stdout);
    fgets(user_input, 5, stdin);
    sscanf(user_input, "%d", size);
  } while(*size > MAX || *size < 1);
}

/*
Prompt user to enter values for each entry in the array.
Make sure each entry is a positive number > 0

Example Output:

Enter positive number for array[0]: 1
Enter positive number for array[1]: 2
Enter positive number for array[1]: 3

*/
void fill_array(int* size, int* array) {
  char user_input[5] = {0};
  printf("\n");
  for(int i = 0; i < *size; ++i) {
    do {
      printf("Enter positive number for array[%d]: ", i);
      fflush(stdout);
      fgets(user_input, 5, stdin);
      sscanf(user_input, "%d", &array[i]);
    } while(array[i] < 1);
  }
}

/*
Print array in nice format.

Example Outputs:

Final array:
1 2 3

FInal array:
1
2
3

*/
void print_array(int* size, int* array) {
  printf("\nFinal Array:\n");
  for(int i = 0; i < *size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void get_input(int* size, int* array) {
  get_size(size);
  fill_array(size, array);
}

int main() {
  int array[MAX] = {0};
  int size = -1;
  get_input(&size, array);
  print_array(&size, array);
}