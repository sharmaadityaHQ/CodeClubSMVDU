/* Copy elements of array A to array B such that negative elements of A appear in beggining of 
B followed by all positive elements followed by all zeroes */
#include<stdio.h>
int main() {
    int a[10],i,j=0,b[10],n,k;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    k=n-1;
    for(i=0;i<n;i++){
        if(a[i]<0){
            b[j++]=a[i];
        }
        else if(a[i]==0){
            b[k--]=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            b[j++]=a[i];
        }
    }
    for(j=0;j<n;j++){
        printf("%d ",b[j]);
    }
}