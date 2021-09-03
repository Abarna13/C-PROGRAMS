/*
Problem Statement
Write a program to count the special characters in the given string

Input Format
Accept the string as an input


Output Format
Print the count of the special characters.

Sample Input 0
togy@#123
Sample Output 0
2


*/


#include<stdio.h>
int main()
{
    char str[100];
    int ind,count=0;
    scanf("%[^\n]s",str);
    for(ind=0;str[ind]!='\0';ind++)
    {
        if(!(str[ind]>=65&&str[ind]<=90||str[ind]>=97&&str[ind]<=122||str[ind]>=48&&str[ind]<=57))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}


