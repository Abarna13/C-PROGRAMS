/*
Problem Statement
Print the following pattern

Input Format
Integer


Output Format
Star Format

Sample Input 0

5

Sample Output 0

*****
*****
*****
*****
*****

*/


#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


