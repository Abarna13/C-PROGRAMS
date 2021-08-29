/*
Problem Statement
Write a program to find whether the given number is an Adam number.

Input Format
Accept an integer as an input

Output Format
Adam / Not Adam

Sample Input 0
10
Sample Output 0
The number is not an Adam number
Sample Input 1
12
Sample Output 1
The number is an Adam number


*/


#include<stdio.h>
int reverse(int num)
{
    int result=0,digit;
    while(num)
    {
        digit=num%10;
        result=result*10+digit;
        num=num/10;
    }
    return result;
}

int checkAdam(int);
int checkAdam(int num)
{
    int sq_num,rev_num,sq_rev,rev_sq;
    sq_num=num*num;
    rev_num=reverse(num);
    sq_rev=rev_num*rev_num;
    rev_sq=reverse(sq_rev);
    return sq_num==rev_sq;
}

int main()
{
    int num;
    scanf("%d",&num);
    if(checkAdam(num))
        printf("The number is an Adam number");
    else
        printf("The number is not an Adam number");
    return 0;
}
