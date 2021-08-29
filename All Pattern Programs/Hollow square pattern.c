/*
Sample Input 0
5
Sample Output 0
*****
*    *
*    *
*    *
*****


*/

#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++,printf("\n"))
        {
            for(col=1;col<=n;col++)
            {
                if(row==1||row==n||col==1||col==n)
                    printf("*");
                else
                    printf(" ");
            }
        }
        return 0;
}
