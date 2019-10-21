/* Print factorial of a no*/
#include<stdio.h>
int factorial(int p);
int main(){
    int num,i,result=1,p,product=1;
    printf("Enter a whole no.");
    scanf("%d",&num);
    if(num>0)
    {for(i=1;i<=num;i=i+1){
        result=factorial(i);
        product=result*product;

    }
    printf("Factorial of %d = %d",num,product);
    }
    else if(num==0)
    printf("the factorial of zero is one");

}
  int factorial(int p)
  {
      int result=1;
      result=result*p;
      return result;
  }
