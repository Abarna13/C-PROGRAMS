/*
Problem Statement
Write a program to count the number of digits using functions.

Input Format
Accept integer as a input


Output Format
Display the count

Sample Input 0
563
Sample Output 0
3


*/


#include<stdio.h>
int countDigits(int);

int countDigits(int num)
{
    int count=0;
    while(num)
    {
        num=num/10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",countDigits(num));
    return 0;
}
