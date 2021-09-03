/*
Problem Statement
Write a program to find the length of the string without using in-built function

Input Format
Accept string as an input

Output Format
Print the count of the string

Sample Input 0
i like apple
Sample Output 0
12

*/

#include<stdio.h>
int main()
{
    char str[100];
    int len;
    scanf("%[^\n]s",str);
    for(len=0;str[len]!='\0';len++);
    printf("%d",len);
    return 0;
}
