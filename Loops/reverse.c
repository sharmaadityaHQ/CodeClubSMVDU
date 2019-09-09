// Find reverse of a no.
#include<stdio.h>
int main() {
    int n,rev=0,d;
    printf("Enter number\n");
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        rev=d+rev*10;
        n/=10;
    }
    printf("Result=%d",rev);
}