/*
Sample Input 0
5
Sample Output 0
*********
**       **
* *     * *
*  *   *  *
*    *    *
*  *   *  *
* *     * *
**       **
*********



*/


#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    n=n*2-1;
    for(row=1;row<=n;row++,printf("\n"))
        {
            for(col=1;col<=n;col++)
            {
                if(row==1||row==n||col==1||col==n||row==col||col==(n-row+1))
                    printf("*");
                else
                    printf(" ");
            }
        }
        return 0;
}
