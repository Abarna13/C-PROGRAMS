/*
Problem Statement
Given an integer input , whether the given input is "Positive" or "Negative" or "Zero" and print the corresponding message

Input Format
Enter the integer as a input


Output Format
Negative or Positive or Zero

Sample Input 0
-2019

Sample Output 0
Negative

*/

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num < 0)
        printf("Negative");
    else if (num > 0)
        printf("Positive");
    else
        printf("Zero");

    return 0;
}

