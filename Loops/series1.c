// Find sum of series: x/a + x^3/3a + x^5/5a + ... +x^n/na
#include<stdio.h>
#include<math.h>
int main() {
    int a,x,n,i;
    float sum = 0;
    printf("Enter a,x,n\n");
    scanf("%d %d %d",&a,&x,&n);
    if(n%2 == 0) {
        n++;
    }
    for(i=1;i<=n;i+=2){
        sum+=pow(x,i)/(float)(a*i);
    }
    printf("Sum of series=%f",sum);
}