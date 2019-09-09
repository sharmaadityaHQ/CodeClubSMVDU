// Find hcf and lcm of two integers
#include<stdio.h>
int main() {
    int num1,num2,i,hcf,lcm;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=2,hcf=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    lcm=(num1*num2)/hcf;
    printf("hcf=%d\n",hcf);
    printf("lcm=%d",lcm);
}