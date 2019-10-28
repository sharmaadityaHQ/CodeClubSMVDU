#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("enter any value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("the value of fact is %d\n",fact);
}
return 0;
}
