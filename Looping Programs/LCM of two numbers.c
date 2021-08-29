/*
Problem Statement
Find the LCM of the given two numbers.

Input Format
Integer Integer


Output Format
Integer

Sample Input 0
5 6
Sample Output 0
30


*/


#include <stdio.h>
int main() {
    int n1, n2, max;

    scanf("%d %d", &n1, &n2);


    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("%d", max);
            break;
        }
        ++max;
    }
    return 0;
}
