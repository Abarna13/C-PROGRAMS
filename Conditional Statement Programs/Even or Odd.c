/*
Problem Statement
Given a number,check whether it is "Odd " or "Even"

Input Format
Enter the input


Output Format
Display Odd or Even

Sample Input 0
8
Sample Output 0
Even


*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
