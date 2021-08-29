/*
Problem Statement
Write a program to calculate the result when the base and power are given

Input Format
Accept two integer as a input

Output Format
Display the calculated value

Sample Input 0
Base=2, power=6
Sample Output 0
64


*/



#include<stdio.h>
int exponentiation(int,int);

int exponentiation(int base,int power)
{
    int count,result=1;
    for(count=1;count<=power;count++)
        result=result*base;
    return result;
}

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",exponentiation(num1,num2));
    return 0;
}
