/*
Problem Statement
Find whether the given number is power of 2 or not.

Input Format
Integer


Output Format
YES or NO

Sample Input 0
128

Sample Output 0
YES


*/



#include <stdio.h>

int main()
{
    int num;
    int tempNum,flag;


    scanf("%d",&num);

    tempNum=num;
    flag=0;

    while(tempNum!=1)
    {
        if(tempNum%2!=0)
        {
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }

    if(flag==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}


