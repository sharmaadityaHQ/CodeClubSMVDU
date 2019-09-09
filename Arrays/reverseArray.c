// Reverse an array and store in another array
#include<stdio.h>
int main() {
    int a[5],i,j,b[5];
    printf("Enter numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=4,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    for(j=0;j<5;j++){
        printf("%d ",b[j]);
    }
}