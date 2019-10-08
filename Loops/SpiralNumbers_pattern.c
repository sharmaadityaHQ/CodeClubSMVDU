/*
Input : 3
Output :
 3 3 3 3 3
 3 2 2 2 3
 3 2 1 2 3
 3 2 2 2 3
 3 3 3 3 3
*/
#include<stdio.h>
int main()
{
    int i,j,k,l,x=1,y,z,n,m,mid;
    scanf("%d",&n);
    m=(2*n-1);
    y=m;
    mid=m/2;
    for(i=1;i<=m;i++)
    {
        z=n;
        for(j=1;j<=m;j++)
        {
            if(j>=x && j<y)
            {
                printf("%d ",z);
            }
            else if(j<x)
            {
                printf("%d ",z--);
            }
            else if(j>=y)
            {
                printf("%d ",z++);
            }
        }
        if(i<=mid)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
        printf("\n");
    }
    
}
