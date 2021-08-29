
/*

Problem Statement
Print all the numbers from 1 to n.

Input Format
Enter the input as a integer


Output Format
Set of integers

Sample Input 0
10

Sample Output 0
1 2 3 4 5 6 7 8 9 10

*/


#include <stdio.h>

int main()
{
    int counter, N;
    scanf("%d", &N);
    for(counter = 1; counter <= N; counter++)
    {
        printf("%d ", counter);
    }

    return 0;
}
