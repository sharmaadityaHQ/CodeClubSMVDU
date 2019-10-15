#include<stdio.h>
int main()
{int i,n,j,sumr=0,suml=0,diff;
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
    for(j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
    }
for(i=1;i<n;i++)
sumr=sumr+a[i][i];
for(i=n-1;i>=0;i--)
suml=suml+a[(n-1)-i][i];


diff=sumr-suml;
if(diff>=0)
printf("%d\n",diff);
else 
printf("%d",-diff);
return 0;
}
