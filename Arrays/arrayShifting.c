// Reposition elements of the array by shifting each of them to the next position and last element to first position
#include<stdio.h>
int main() {
    int a[5],i,j,n,t;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    t=a[n-1];
    for(i=n-1;i>=1;i--){
        a[i]=a[i-1];
    }
    a[0]=t;
    for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}