// Find sum of all digits and biggest and smallest digit
#include<stdio.h>
int main() {
    int n,d,big,small,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    big=n%10;
    small=n%10;
    while(n!=0){
        d=n%10;
        sum+=d;
        if(d>big){
            big=d;
        }
        if(d<small){
            small=d;
        }
        n/=10;
    }
    printf("Sum of digits=%d\n",sum);
    printf("Biggest=%d\nSmallest=%d",big,small);
}