#include<stdio.h>
int main()
{
	int i,j; char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
		{
			if(i+j>=6)
			printf("%c",ch);
			else
			printf(" ");
			
		}
		ch++;
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
