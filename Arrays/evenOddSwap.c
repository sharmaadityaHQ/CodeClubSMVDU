// Swap elements of every even location with following odd location
#include<stdio.h>
int main() {
    int a[5],i,j,b[5],n,t;
    printf("Enter size\n");
    scanf("%d",&n);
    if(n%2!=0){
        n--;
    }
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}