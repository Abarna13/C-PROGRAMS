/*

Problem Statement
Write a program to replace all vowels with spaces

Input Format
Accept string as an input


Output Format
Print the replaced string

Sample Input 0
elephant
Sample Output 0
 l ph nt


*/


#include<stdio.h>
int main()
{
    char str[100];
    int ind;
    scanf("%[^\n]s",str);
    for(ind=0;str[ind]!='\0';ind++)
    {
        if(str[ind]=='a'||str[ind]=='e'||str[ind]=='i'||str[ind]=='o'||str[ind]=='u'||str[ind]=='A'||str[ind]=='E'||str[ind]=='I'||str[ind]=='O'||str[ind]=='U')
        {
            str[ind]=' ';
        }
    }
    printf("%s",str);
    return 0;
}


