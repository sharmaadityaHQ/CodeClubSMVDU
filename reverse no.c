#include<stdio.h>
int main()
{
int r,n,sum=0;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
printf("the value of sum is %d",sum);
return 0;
}
