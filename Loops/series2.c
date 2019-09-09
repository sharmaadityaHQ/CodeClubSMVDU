// Find : 1 - x^2/2! + x^4/4! - ... x^n/n!
#include<stdio.h>
#include<math.h>
int main() {
    int num,x,j,d,i,sign=-1,n;
    int sum = 1;
    printf("Enter value of x and n\n");
    scanf("%d %d",&x,&n);
    if(n%2==1){
        n++;
    }
    for(i=2;i<=n;i+=2){
        d=1;
        for(j=i;j>0;j--){
            d*=j;
        }
        num=sign*pow(x,i);
        sum=sum+(num)/d;
        sign*=-1;
    }
    printf("Sum=%d",sum);
}