#include<stdio.h>
int main(void)
{
int coef,j,n,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<=(n-i);j++)
printf(" ");
for(j=0;j<=i;j++)
{
	if(i==0||j==0)
	coef=1;
	else
	coef=coef*(i-j+1)/j;
	printf("%d ",coef);
}
printf("\n");
}}
