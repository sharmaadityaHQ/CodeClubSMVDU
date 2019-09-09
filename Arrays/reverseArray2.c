// Reverse an array without using another array
#include<stdio.h>
int main() {
    int a[5],i,j,b[5],t;
    printf("Enter numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=4;i<5/2;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(j=0;j<5;j++){
        printf("%d ",a[j]);
    }
}