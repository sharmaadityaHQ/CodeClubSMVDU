// Find (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... upto N terms
#include<stdio.h>
int main() {
    int n=0,sum=0,sum2=0,i,j;
    printf("Enter no of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=i;j++){
            sum+=j;
        }
        sum2+=sum;
    }
    printf("Sum=%d",sum2);
}