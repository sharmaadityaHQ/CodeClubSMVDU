#include<stdio.h>
int main()
{
    int a,r;
    int res;
    printf("entre the base:-");
    scanf("%d",&a);
    printf("Entre the power:-");
    scanf("%d",&r);
    res=pow(a,r);
    printf("%d",res);
    return 0;
}
int pow(int a,int r)
{
    if(r==0)
         return 1;
    else if (r==1)
        return a;
    else
    {int d=pow(a,r/2);
        if(r%2==0)
            return d*d;
        else
            return d*a*d;
    }
}
