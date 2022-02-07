/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1,sub2; 
    float total, average;

    //Input marks of two subjects
    printf("Enter marks of two subjects: \n");
    scanf("%f%f", &sub1, &sub2);

    // Calculate total, average
    total = sub1+sub2;
    average = total / 2.0;

    //print results
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
  
  return 0;
}

