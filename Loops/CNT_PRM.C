#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int a)
{
int i;
if(a==1 || a==0)
	return 0;

for(i=2; i<=sqrt(a); i++)
{	
	
	if(a%i==0)
		return 0;
}
return 1;
}

int count(int a, int b)
{
int c = 0,i;
for(i=a; i<=b; i++)
{
	if(prime(i))
		c++;
}
return c;
}

void main()
{
int a,b;
clrscr();

printf("Enter the lower number :: ");
scanf("%d",&a);

printf("Enter the higher number :: ");
scanf("%d",&b);

printf("Number of prime numbers :: %d",count(a,b));
getch();
}

