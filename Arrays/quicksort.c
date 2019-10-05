//code for sorting an array using quicksort

 #include<stdio.h>

void swap(int *x,int *y)
{  int t;
	t=*x;
	*x=*y;
	*y=t;
}

int partition(int *a,int l,int u)
{ 
	int i=l-1/*imp step*/,j;int pivot=u;
  
  for(j=l;j<u;j++)
  {
  	if(a[j]<a[pivot])
  	{   i++;
  		swap(&a[j],&a[i]);
	}
	
  }
  
  swap(&a[i+1],&a[pivot]);
  return i+1;
}

void quicksort(int *a,int l,int u)
{  if(l<u)
   {
   int index=partition(a,l,u);
   quicksort(a,l,index-1);
   quicksort(a,index+1,u);
   }
}

int main()
{
	int i,j,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	
	printf("The sorted array is \n");
	for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
}
