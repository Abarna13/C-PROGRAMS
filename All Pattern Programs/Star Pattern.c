/*

Sample Input 0

5

Sample Output 0

    *****
   *****
  *****
 *****
*****

*/

#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++,printf("\n"))
        {
            for(col=row;col<n;col++)
            printf(" ");
    for(col=1;col<=n;col++)
        printf("*");
        }
        return 0;
}





