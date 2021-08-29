/*
Problem Statement
Write a program to print all prime numbers in a range using function

Input Format
Accept two integers as an input

Output Format
Display the list of prime numbers

Sample Input 0
1 10
Sample Output 0
2 3 5 7


*/

#include<stdio.h>
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


void generatePrime(int,int);

void generatePrime(int start,int end)
{
    int num;
    for(num=start;num<=end;num++)
    {
        if(checkPrime(num))
        printf("%d ",num);
    }
}

int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    generatePrime(start,end);
    return 0;
}
