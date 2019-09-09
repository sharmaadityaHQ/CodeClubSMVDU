//Find if no is prime or not
#include<stdio.h>
int main(){
    int f=0,i,num;
    printf("Enter number\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Prime no");
    }
    else{
        printf("Not prime");
    }
}