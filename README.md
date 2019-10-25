#include<stdio.h>
int main()
{
int a[100],n,i,j,t;
printf("enter no.");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n,i++)
scanf("%d,a[i]");
for(i=1;i<n;i++)
{
for(j=i;j>0 && a[j-1]>a[j];j--)
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
