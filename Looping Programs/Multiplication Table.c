/*
Problem Statement
Print the multiplication table as per the multiplicant and n.

Input Format
Integer Integer


Output Format
Integer * Integer = Integer

Sample Input 0
6 6
Sample Output 0
1 * 6 = 6
2 * 6 = 12
3 * 6 = 18
4 * 6 = 24
5 * 6 = 30
6 * 6 = 36


*/


#include<stdio.h>
int main()
{
	int n,i;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d * %d = %d\n",i,n,i*n);
	}
	return 0;
}



