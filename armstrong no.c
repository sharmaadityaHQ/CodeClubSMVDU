//armstrong number
#include<stdio.h>
void main()
{int n,temp,r,c,sum=0,i;
printf("enter any value of n");;
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
c=r*r*r;
sum=sum+c;
printf("the value of sum is %d\n",sum);
n=n/10;
}
n=temp;
if(n==sum)
{printf("armstrong nunber");}
else
{printf("not a armstrong number");}
return 0;
}
