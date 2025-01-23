//SYSC 2006 - Lab 2 Solution template

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Include the necessary header for _Bool
#include "lab2.h"

/* Replace these lines with your information */ 
  const char* author = "Victoria Woo"; 
  const char* student_number = "101313013"; 

// Type your solution to exercise 1 inside the body of the function. You need to update the return statement
int alarm_clock(int day,_Bool vacation){
  if (day < 0 || day > 6){
    printf("Please input an integer for day between 0 and 6 inclusive \n");
    return -1;
  } else {
    if (vacation == true) {
      if (day == 0 || day == 6) {
        return -1;
      }
    } else if ((vacation == false) && (day >= 1 && day <= 5)) {
      return 7;
    }
    return 10;
  }
}
// Type your solution to exercise 2 inside the body of the function.
void count_replace(int value){
  if (value <= 0) {
    printf("Please input a value greater than 0 \n");
  }
  for (int i = 1; i <= value; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("FizzBuzz ");
    } else if (i % 3 == 0) {
      printf("Fizz ");
    } else if (i % 5 == 0) {
      printf("Buzz ");
    } else {
      printf("%d ", i);
    }
  }
  printf("\n");
  return;
}
// Type your solution to exercise 3 inside the body of the function. You need to update the return statement
_Bool is_prime(int value){
  for (int j = 2; j < value; j++){
    if (value % j == 0) {
      return true;
    }
  }
  return false;
}
// Type your solution to exercise 4 inside the body of the function. You need to update the return statement

int sum_even(int value){
  int total = 0;
  if (value < 0){
    printf("Please input a value greater than 0 \n");
    return -1;
  }
  for (int k = 0; k <= value; k += 2) {
    total += k;
  }
  return total;
}