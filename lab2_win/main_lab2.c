//SYSC 2006 - Lab 2 Template

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Include the necessary header for _Bool
#include "lab2.h"

/* Replace these lines with your information */ 
  const char* author_main = "Victoria Woo"; 
  const char* student_number_main = "101313013"; 

int main(void){
  // Tests exercise 1 - Complete for a comprehensive test harness
  int expected_week_non_vac = 7;
  for(int day = 1; day <= 5; day++){
    int alarm_time = alarm_clock(day, false);
    if (alarm_time == expected_week_non_vac) {
      printf("Day %d, Non vacation: TEST PASS.\n", day);
    } else {
      printf("Day %d, Non vacation: TEST FAIL.\n", day);
    } 
  }

  int expected_week_vac = 10;
  if (alarm_clock(3, true) == expected_week_vac) {
    printf("Day %d, vacation: TEST PASS. \n", 3);
  } else {
    printf("Day %d, vacation: TEST FAIL. \n", 3);
  }

  int expected_weekend_non_vac = 10;
  if (alarm_clock(6, false) == expected_weekend_non_vac) {
    printf("Day %d, Non vacation: TEST PASS. \n", 6);
  } else {
    printf("Day %d, Non vacation: TEST FAIL. \n", 6);
  }

  int expected_weekend_vac = -1;
  if (alarm_clock(0, true) == expected_weekend_vac) {
    printf("Day %d, vacation: TEST PASS. \n", 0);
  } else {
    printf("Day %d, vacation: TEST FAIL. \n", 0);
  }

  // Type your test cases for exercise 2. Make sure to include border line cases
  count_replace(3);
  count_replace(6);
  count_replace(15);
  count_replace(-2);

  // Type your test cases for exercise 3. Make sure to include border line cases
  if (is_prime(6) == 1) {
    printf("is_prime(6): TEST PASS \n");
  } else {
    printf("is_prime(6): TEST FAIL \n");
  }

  if (is_prime(7) == 0) {
    printf("is_prime(11): TEST PASS \n");
  } else {
    printf("is_prime(11): TEST FAIL \n");
  }

  if (is_prime(9) == 1) {
    printf("is_prime(9): TEST PASS \n");
  } else {
    printf("is_prime(9): TEST FAIL \n");
  }

  // Type your test cases for exercise 4. Make sure to include border line cases
  if (sum_even(10) == 30) {
    printf("sum_even(10): TEST PASS \n");
  } else {
    printf("sum_even(10): TEST FAIL \n");
  }

  if (sum_even(4) == 6) {
    printf("sum_even(6): TEST PASS \n");
  } else {
    printf("sum_even(6): TEST FAIL \n");
  }

  if (sum_even(-2) == -1) {
    printf("sum_even(-2): TEST PASS \n");
  } else {
    printf("sum_even(-2): TEST FAIL \n");
  }

  printf("Test harness finished\n");
  return EXIT_SUCCESS;
}


