/*
Problem Statement
Write a program to check whether the given number is Armstrong number using function.

Input Format
Accept an integer as an input

Output Format
Armstrong / Not Armstrong

Sample Input 0
373
Sample Output 0
The number is not an Armstrong number
Sample Input 1
153
Sample Output 1
The number is an Armstrong number


*/


#include<stdio.h>
int checkArmstrong(int);
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

int exponentiation(int base,int power)
{
    int count,result=1;
    for(count=1;count<=power;count++)
        result=result*base;
    return result;
}

int checkArmstrong(int num)
{
    int count,copy,result=0;
    copy=num;
    count=countDigits(num);
    while(num)
    {
        int digit=num%10;
        result=result+exponentiation(digit,count);
        num=num/10;
    }
    return result==copy;
}
int main()
{
    int num;
    scanf("%d",&num);
    if(checkArmstrong(num))
        printf("The number is an Armstrong number");
    else
        printf("The number is not an Armstrong number");
    return 0;
}
