/*
Problem Statement
Given a year, check whether it is a leap year

Input Format
Enter the integer as a input


Output Format
Leap year or Not a Leap year

Sample Input 0
2012

Sample Output 0
Leap year

Sample Input 1
1900

Sample Output 1
Not a Leap year

*/


#include <stdio.h>

int main() {
   int year;
   scanf("%d", &year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("Leap year");
   else
      printf("Not a Leap year");

   return 0;
}


