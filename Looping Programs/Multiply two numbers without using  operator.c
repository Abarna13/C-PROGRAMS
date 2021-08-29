
/*
Problem Statement
Multiply the given two numbers without using * operator.

Input Format
Integer Integer


Output Format
Integer

Sample Input 0
10 2
Sample Output 0
20


*/


#include <stdio.h>
int multiply(int firstnum, int secondnum)
{
    if(secondnum == 0)
    {
        return 0;

    }
    else
    {
        return (firstnum + multiply(firstnum, secondnum-1));

    }

}

main()
{
    int firstnum, secondnum, prod;
    scanf("%d %d",&firstnum,&secondnum);
    prod = multiply(firstnum,secondnum);
    printf("%d",prod);
}
