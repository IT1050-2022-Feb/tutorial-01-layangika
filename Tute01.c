/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int i ;
   float mark,sum=0, avg;
   printf("Enter Marks obtained in 2 subject:  ");
   for(i=0;i<2;)
   {
      scanf("%f",&mark);
      sum=sum+mark;
   }
    
  return 0;
}

