/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {//main functio begins program execution
  float mark1, mark2, total, average; //assing variables

  printf("Please enter mark 1 : "); //prompt
  scanf("%f", &mark1); //read

  printf("Please enter mark 2 : "); //prompt
  scanf("%f", &mark2); //read

  total = mark1 + mark2; //calculate total

  average =total/2.0; //calculate average

  printf("Average is %.2f", average); //print average
  
  return 0;
} //end of the main function

