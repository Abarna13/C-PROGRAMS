/*
Problem Statement
Print all the even numbers in the given range.

Input Format
Accept a start and ending limit as integer


Output Format
Set of Integers

Sample Input 0
11 20

Sample Output 0
12 14 16 18 20

*/


#include<stdio.h>

int main()
{
    int f1,f2,rem,i;
    scanf("%d",&f1);
    scanf("%d",&f2);

    for(i=f1; i<=f2; ++i)
    {
        rem = i % 2;
        if(rem == 0)

            printf("%d ",i);

    }
        return 0;

}

