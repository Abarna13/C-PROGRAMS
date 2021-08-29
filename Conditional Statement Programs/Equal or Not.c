/*
Problem Statement
Given 2 integer input check whether the 2 input are "Equal" or "Not Equal" print the corresponding message

Input Format
Enter the two integer as a input

Output Format
Print Equal or Not Equal

Sample Input 0
100
100

Sample Output 0
Equal


*/

#include <stdio.h>
void main()
{
    int int1, int2;


    scanf("%d", &int1);
    scanf("\n%d", &int2);
    if (int1 == int2)
        printf("Equal");
    else
        printf("Not Equal");

}

