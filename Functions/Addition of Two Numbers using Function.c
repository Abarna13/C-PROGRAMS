/*
Problem Statement
Write a program to add the two given numbers using a function and return the sum

Input Format
Accept two integer as a input

Output Format
Display the sum

Sample Input 0
10 10
Sample Output 0
20


*/



#include<stdio.h>
int add(int,int);

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",add(num1,num2));
    return 0;
}
