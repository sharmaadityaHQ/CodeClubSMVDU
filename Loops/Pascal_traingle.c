#include<stdio.h>
int main()
{
	int i,j,k,rows,coeff;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		
		for(k=0;k<=i;k++)
		{
			if(i==0  || k==0)
				coeff=1;
			else
				coeff=coeff*(i-k+1)/k;
			printf("%d ",coeff);
		}
		printf("\n");
	}
	return 0;
}

