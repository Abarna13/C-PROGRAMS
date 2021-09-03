/*
Problem Statement
Write a program to convert the digits of the string into a single number

Input Format
Accept string as an input


Output Format
Print the number in the string

Sample Input 0
hi12hello13
Sample Output 0
1213
Sample Input 1
heaven
Sample Output 1
0


*/

#include<stdio.h>
int main()
{
char str[100],temp;
int len,itr,rot;
scanf("%d",&rot);
scanf("%s",str);
for(len=0;str[len]!='\0';len++);

while(rot%len)
{
temp=str[0];
for(itr=0;itr!=len-1;itr++)
str[itr]=str[itr+1];
str[len-1]=temp;
rot--;
}
printf("%s",str);
return 0;
}
