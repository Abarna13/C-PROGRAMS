/*
Problem Statement
Write a program to convert a given number to the mentioned base value (base lies in range 2 to 10)

Input Format
Accept an integer as an input


Output Format
Print the converted value

Sample Input 0
15 15
Sample Output 0
10

*/


#include<stdio.h>
int baseConvert(int,int);

int baseConvert(int num,int base)
{
    int result=0,pv=1,digit;
    while(num)
    {
        digit=num%base;
        num=num/base;
        result=(digit*pv)+result;
        pv=pv*10;
    }
    return result;
}

int main()
{
    int num,base;
    scanf("%d %d",&num,&base);
    printf("%d",baseConvert(num,base));
    return 0;
}
