/*
Problem Statement
Print all the Odd numbers from 1 to n.

Input Format
Integer


Output Format
Set of Integers

Sample Input 0
10
Sample Output 0
1 3 5 7 9


*/


#include <stdio.h>
int main()
{

	int i, n;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
	    if(i % 2 != 0)
	    {
			printf("%d ", i);
		}
	}
}
