#include<stdio.h>
int main()
{
	int i,j,x,y;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i+j<=5)
			printf(" ");
			else
			printf("* ");
	    }
	    printf("\n");
    }
    for(x=1;x<=4;x++)
    {
    	for(y=4;y>=1;y--)
    	{
    		if(x+y<=5)
    		printf(" *");
    		else
    		printf(" ");
		}
    	printf("\n");
	}
	
	return 0;	
	
	
	
	
	
}