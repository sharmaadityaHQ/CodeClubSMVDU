//Print fibonacci series
#include<stdio.h>
int main(){
    int a=0,b=1,i,ctr,c;
    printf("Enter no of terms\n");
    scanf("%d",&ctr);
    printf("%d %d ",a,b);
    for(i=3;i<=ctr;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}