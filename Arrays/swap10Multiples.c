// Elements which are multiples of 10 are to be swapped with next position(except last element)
#include<stdio.h>
int main() {
    int a[5],i,j,n,t;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]%10==0){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            i++;
        }
    }
    for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}