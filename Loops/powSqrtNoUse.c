//Find pow and sqrt of numbers without using built in functions
#include<stdio.h>
int main(){
    float a,b,i,res=1;
    float temp, sqrt;
    printf("Enter 2 numbers\n");
    scanf("%f %f",&a,&b);
    for(i=1;i<=b;i++){
        res*=a;
    }
    printf("a^b = %f\n",res);
    sqrt = a / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ((a/temp) + temp) / 2;
    }
    printf("sqrt of %f = %f",a,sqrt);
}
