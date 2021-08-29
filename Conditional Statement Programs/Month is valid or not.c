/*
Problem Statement
Write a program to print the respective month name based on given input

Input Format
Accept integer as a input


Output Format
Print respective month or invalid

Sample Input 0
4


Sample Output 0
April

*/


#include<stdio.h>
int main()
{
   	int n;

   	scanf("%d",&n);
   	switch(n)
   	{
		case 1:
      			printf("January");
      			break;
		case 2:
      			printf("February");
      			break;
		case 3:
      			printf("March");
      			break;
		case 4:
     			printf("April");
      			break;
		case 5:
      			printf("May");
      			break;
		case 6:
      			printf("June");
      			break;
		case 7:
      			printf("July");
      			break;
		case 8:
      			printf("August");
      			break;
		case 9:
      			printf("September");
      			break;
		case 10:
      			printf("October");
      			break;
		case 11:
      			printf("November");
      			break;
		case 12:
      			printf("December");
      			break;
		default:
      			printf("invalid");
      			break;
    	}
   return 0;
}

