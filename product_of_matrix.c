#include<stdio.h>
int main(void)
{
	int i,j,ar1[3][3],ar2[3][3],r,m;
	printf("Enter 1st matrix\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&ar1[i][j]);
	printf("Enter 2nd matrix\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&ar2[i][j]);	
		printf("Multiplication of both matrix :\n\t");
	for(i=0;i<3;i++)
	{
		for(m=0;m<3;m++)
		{
			r=0;
			for(j=0;j<3;j++)
			r=r+ar1[i][j]*ar2[j][m];
			printf("%d\t",r);
		}
	printf("\n\t");
	}}