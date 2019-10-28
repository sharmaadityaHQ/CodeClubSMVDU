//armstrong number
#include<stdio.h>
void main()
{int n,temp,a,c,sum=0,i;
printf("enter any value of n");;
scanf("%d",&n);
temp=n;
while(n>0)
{
a=n%10;
c=a*a*a;
sum=sum+c;
printf("the value of sum is %d\n",sum);
n=n/10;
}
n=temp;
if(n==sum)
{printf("armstrong no.");}
else
{printf("not a armstrong no.");}
return 0;
}
