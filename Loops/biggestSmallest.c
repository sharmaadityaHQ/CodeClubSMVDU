//Input n no of numbers from user. Display smallest and biggest no.
#include<stdio.h>
int main(){
    int n,num,big,small,i;
    printf("Enter n (no of numbers)\n");
    scanf("%d",&n);
    printf("Enter first number\n");
    scanf("%d",&num);
    big=num;
    small=num;
    for(i=2;i<=n;i++){
        printf("Enter number: ");
        scanf("%d",&num);
        if(num>big){
            big=num;
        }
        if(num<small){
            small=num;
        }
    }
    printf("Smallest: %d\n",small);
    printf("Largest: %d",big);
}