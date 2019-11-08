#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    pritnf("entre the number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=n-i;j>0;j--)
            printf("  ");
        for (k=1;k<=i;k++)
            printf(" *");
    }
    m=n-1;
     for (i=1;i<=m;i++)
    {
        for (j=1;j>i;j++)
            printf("  ");
        for (k=n-1;j>0;j--)
            printf(" *");
    }
    return 0;
}
