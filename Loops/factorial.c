// Print factorial of a no
#include<stdio.h>
int main(){
    int num,i,res=1;
    printf("Enter number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        res*=i;
    }
    printf("Factorial of %d = %d",num,res);
}