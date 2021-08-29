/*

Sample Input 0

5

Sample Output 0

10101
01010
10101
01010
10101

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
                if(row%2==1&&col%2==1)
                    printf("1");
                else if(row%2==1&&col%2==0)
                    printf("0");
                else if(row%2==0&&col%2==0)
                    printf("1");
                else if(row%2==0&&col%2==1)
                    printf("0");
            }
        }
        return 0;
}


