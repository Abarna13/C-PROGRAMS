/*
Problem Statement
Write a program to find the square of a number using function

Input Format
Accept one integer as a input


Output Format
Display the square of the given number

Sample Input 0
5
Sample Output 0
25


*/


#include<stdio.h>
int square(int);

int square(int a)
{
    return a*a;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",square(num));
    return 0;
}
