/*
Problem Statement
Write a program to accept the string from the user and display the string in the password format without making any change in the input array

Input Format
Accept the string as input


Output Format
Print string in password format


Sample Input 0
hgfh hjshf
Sample Output 0
**********


*/

#include<stdio.h>
int main()
{
int ind;
char str[100],str1[100];
scanf("%[^\n]s",str);

for(ind=0;str[ind]!='\0';ind++)
{
printf("*");
}
return 0;
}
