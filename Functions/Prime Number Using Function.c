/*
Problem Statement
Write a program to check whether the given number is prime number using functions

Input Format
Accept an integer as an input


Output Format
Prime / Not Prime

Sample Input 0
91

Sample Output 0
The number is not a prime number

Sample Input 1
13

Sample Output 1
The number is a prime number

*/


#include<stdio.h>
int checkPrime(int);

int checkPrime(int num)
{
    int factor;
    if(num==1)
        return 0;
    if(num%2==0 && num!=2)
        return 0;
    for(factor=3;factor*factor<=num;factor=factor+2)
    {
        if(num%factor==0)
        return 0;
    }
    return 1;
}


int main()
{
    int num,result;
    scanf("%d",&num);
    result=checkPrime(num);
    if(result==0)
        printf("The number is not a prime number");
    else
        printf("The number is a prime number");
    return 0;
}



