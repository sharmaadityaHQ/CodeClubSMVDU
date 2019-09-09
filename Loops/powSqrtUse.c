//Find pow and square root functions by using built in functions
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    d=sqrt(a);
    printf("a^b = %d\n",c);
    printf("sqrt of %d = %d",a,d);
    return 0;
}