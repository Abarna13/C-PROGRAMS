/*
Problem Statement
Write a program to print corresponding day based on given input

Input Format
Accept integer as a input


Output Format
Print corresponding day or invalid

Sample Input 0
0

Sample Output 0
Sunday

Sample Input 1
8

Sample Output 1
Invalid

*/


#include <stdio.h>
void main()
{
   int dayno;

   scanf("%d",&dayno);
   switch(dayno)
   {
	case 0:
	       printf("Sunday");
	       break;
	case 1:
	       printf("Monday");
	       break;
	case 2:
	       printf("Tuesday");
	       break;
	case 3:
	       printf("Wednesday");
	       break;
	case 4:
	       printf("Thursday");
	       break;
	case 5:
	       printf("Friday");
	       break;
	case 6:
	       printf("Saturday");
	       break;
	default:
	       printf("invalid");
	       break;
      }
}

