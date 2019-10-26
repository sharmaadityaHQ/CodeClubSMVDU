
#include<stdio.h>
int main(){
    int f=0,i,num,flash=0;
    printf("Enter a whole number\n");
    scanf("%d",&num);
    if(num==0)
    {
       printf("Zero is neither prime nor composite\n");
    }
   else if(num==1)
    {
       printf("One is neither prime nor composite\n");
    }
   else if(num==2)
    {
        printf("The entered number is a prime number ");
    }
    else if(num==3)
    {
        printf("The entered number is a prime number");
    }
    else
    {
        for(i=2;i<=num/2;i++){
        if((num%i)==0)
        {
            flash=0;
            break;
        }
        else
        {
            flash=1;
        }



    }
    if(flash==0)
    {
        printf("The entered number is composite");
    }
    else
    {
        printf("The entered number is prime");
    }
    }
}
