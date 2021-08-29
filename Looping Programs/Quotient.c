/*
Problem Statement
Divide the given two numbers and print the quotient without using / operator.

Input Format
Integer Integer


Output Format
Integer

Sample Input 0
10 2
Sample Output 0
5


*/

#include<stdio.h>
int main()
{
	int num1,num2,quotient;

	scanf("%d %d",&num1,&num2);
	quotient=num1/num2;
	printf("%d",quotient);
	return  0;
}

