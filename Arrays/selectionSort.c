// Selection sort
#include<stdio.h>
int main() {
    int a[5],t,i,j,min,pos;
    printf("Enter 5 elements\n");
    for(i = 0; i<5; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        min=a[i];
        pos=i;
        for(j=i+1;j<5;j++){
            if(a[j]<min){
                min=a[j];
                pos=j;
            }
        }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}