/*
Problem Statement
Write a program to count the number of upper-case characters in a given string

Input Format
Accept string as an input


Output Format
Print the count of Uppercase characters

Sample Input 0
BeauTIfull Life
Sample Output 0
4


*/


#include<stdio.h>
int main()
{
    char str[100];
    int ind,count=0;
    scanf("%[^\n]s",str);

    for(ind=0;str[ind]!='\0';ind++)
    {
        if(str[ind]>=65&&str[ind]<=90)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
