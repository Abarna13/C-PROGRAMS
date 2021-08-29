/*
Problem Statement
Print all the alphabets for given n times.

Input Format
Integer


Output Format
All the alphabets


Sample Input 0
5
Sample Output 0
a b c d e f g h i j k l m n o p q r s t u v w x y z
a b c d e f g h i j k l m n o p q r s t u v w x y z
a b c d e f g h i j k l m n o p q r s t u v w x y z
a b c d e f g h i j k l m n o p q r s t u v w x y z
a b c d e f g h i j k l m n o p q r s t u v w x y z


*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	char c;


	scanf("%d", &n);


	for (i = 0; i < n; ++i)
        {
            for (c = 'a'; c <= 'z'; ++c)
            {
                printf("%c ", c);
            }
            printf("\n");
        }

}


