/*
Problem Statement
Write a program to search for a character in a string

Input Format
Accept string as an input


Output Format
Present / Not Present

Sample Input 0
e
three

Sample Output 0
Present

Sample Input 1
w
i like a tea

Sample Output 1
Not Present


*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1;
    int ind,count=0;
    scanf("%c \n",&str1);
    scanf("%[^\n]s",str);

    for(ind=0;str[ind]!='\0';ind++)
    {
        if(str[ind]==str1)
        {
            count++;
            printf("Present");
            break;
        }
    }
    if(count==0)
    {
        printf("Not Present");
    }
    return 0;
}



