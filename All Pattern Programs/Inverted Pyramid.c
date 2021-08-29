/*
Sample Input 0
5
Sample Output 0
*********
 *******
  *****
   ***
    *



*/

#include<stdio.h>

int main()
{
    int i, j, rows;

    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
        {
            for (j = 0; j < i; j++)
                {
                    printf(" ");
                }

                for (j = 0;j < 2*(rows-i)-1; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
        }
        return 0;
}
