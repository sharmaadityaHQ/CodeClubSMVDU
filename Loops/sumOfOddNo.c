//Find sum of first 10 odd numbers
#include<stdio.h>
int main(){
    int sum=0,i;
    for(i=1;i<20;i+=2){
        sum+=i;
    }
    printf("Sum of odd numbers = %d",sum);
}