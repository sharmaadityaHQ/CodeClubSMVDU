#include<stdio.h>
int main()
{
int a,i,factorial=1;
printf("enter any value of a");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
printf("the value of factorial is %d\n",fact);
}
return 0;
}
