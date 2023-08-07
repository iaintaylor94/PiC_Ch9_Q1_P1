// This program uses structures to print the days date

#include <stdio.h>

int main(void) {

  struct date {
  int day;
  int month;
  int year;
  };

  struct date today;

  today.day = 25;
  today.month = 9;
  today.year = 2004;

  printf ("Todays date is: %d/%d/%.2d", today.day, today.month, today.year % 100);
  
  return 0;
}