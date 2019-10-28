#include<stdio.h>
int main()
{int num,r;
printf("enter a number");
scanf("%d",&num);
r=2;
while(r<=num-1)
{
    if(num%r==0)
{
printf("not a prime number\n");
break;
}
r++;
}
if(r==num)
printf("prime number\n");
}
