#include<stdio.h>
int main()
{
    int n,on,r,sum=0;
    scanf("%d",&n);
    on=n;
    while(n>0)
      {

        r=n%10;
        sum=sum*10+r;
        n=n/10;
      }

      if (on==sum)
        printf("it is palindrome");
      else
        printf("it is not palindrome");
return 0;
}
