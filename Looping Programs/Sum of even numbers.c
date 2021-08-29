/*
Problem Statement
Find the sum of even numbers in the given range.

Input Format
Integer


Output Format
Integer

Sample Input 0
20
Sample Output 0
110


*/

#include<stdio.h>

int main()
{
  int i, number, Sum = 0;


  scanf("%d", &number);


  for(i = 1; i <= number; i++)
  {
    if ( i%2 == 0 ) //Check whether remainder is 0 or not
    {

        Sum = Sum + i;
    }
  }
  printf("%d", Sum);

  return 0;
}
