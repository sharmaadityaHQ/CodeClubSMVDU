// This program uses Linear Search Algorithm to search an integers in an array of integers
#include<stdio.h>
int main()
{
	int n,i,num,a[100];
	printf("How many numbers? ");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to be searched: ");
	scanf("%d",&num);
	for(i=1;i<=n;i++)
	{
		if(a[i]==num)
			{
				printf("%d is found at location %d",num,i);
				break;
			}
	}
	if(i==n+1)
	{
		printf("%d is not present",num);
	}
	return 0;
}