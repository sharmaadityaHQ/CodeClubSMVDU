// Revrse each part of integer array when array is divided into two parts
#include<stdio.h>
int main() {
    int a[5],i,j,b[5],s,t;
    printf("Enter size\n");
    scanf("%d",&s);
    printf("Enter numbers\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=s/2-1;i<s/4;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    if(s%2==0){
        i=s/2;
    }
    else{
        i=s/2+1;
    }
    for(j=s-1;i<3*s/4;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(j=0;j<s;j++){
        printf("%d ",a[j]);
    }
}