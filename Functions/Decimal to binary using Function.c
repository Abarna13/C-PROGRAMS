/*
Problem Statement
Write a program to convert a number from decimal to binary using functions

Input Format
Accept integer as a input

Output Format
Display the binary form

Sample Input 0
7
Sample Output 0
111


*/


#include<stdio.h>
int decToBin(int);

int decToBin(int num)
{
    int result=0,pv=1,digit;
    while(num)
    {
        digit=num%2;
        num=num/2;
        result=(digit*pv)+result;
        pv=pv*10;
    }
    return result;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",decToBin(num));
    return 0;
}
