#include "stdio.h"
#include "string.h"

#define BUFFER_SIZE 30

/*
Read up to BUFFER_SIZE - 1 characters from stdin and
store it in name buffer.  Additionally, remove the
newline character ('\n') from the end of the name buffer

Example output:

Enter your name: Bob
*/
void get_name(char* name) {
  //TODO: put code here
}

/*
Read from stdin and store in expenses variable.
Make sure the value is positive.  Otherwise keep
asking for input

Example output:

Enter weekly expenses (must be positive): -10
Enter weekly expenses (must be positive): abc
Enter weekly expenses (must be positive): 10
*/
void get_weekly_expenses(float* expenses) {
  //TODO: put code here
}

/*
Read from stdin and store in earnings variable.
Make sure the value is positive.  Otherwise keep
asking for input

Example output:

Enter weekly earnings (must be positive): -10
Enter weekly earnings (must be positive): abc
Enter weekly earnings (must be positive): 10
*/
void get_weekly_earnings(float* earnings) {
  //TODO: put code here
}

/*
Calculate daily profit based on weekly expenses and earnings.
Formula is:  Profit = Earning - Expenses / 7
Print Name and result on screen.
Make sure result only has 2 numbers after decimal point

Example Output:

Bob, your daily profits are $50.00.
*/
void print_daily_profit(char* name, float* expenses, float* earnings) {
  //TODO: put code here
}

int main() {
  char name[BUFFER_SIZE] = {0};
  float expenses = -1,
        earnings = -1;
  get_name(name);
  get_weekly_expenses(&expenses);
  get_weekly_earnings(&earnings);
  print_daily_profit(name, &expenses, &earnings);
}