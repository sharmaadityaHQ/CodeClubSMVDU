// Swap first half side of array with second half side
#include<stdio.h>
int main() {
    int a[5],i,j,s,t;
    printf("Enter size\n");
    scanf("%d",&s);
    printf("Enter numbers\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    if(s%2==0){
        j=s/2;
    }
    else{
        j=s/2+1;
    }
    for(i=0;i<s/2;i++,j++){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(j=0;j<s;j++){
        printf("%d ",a[j]);
    }
}