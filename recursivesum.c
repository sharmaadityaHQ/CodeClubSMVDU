#include<stdio.h>
int main()
{
        int x,n;
        scanf("%d",&n);
        x=sum(n);
        printf("%d",x);
        return 0;
}
int sum(int n)
{int a,b,c;
int p=0;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
    if (n>3)
    return p=sum(n-1)+sum(n-2)+sum(n-3);
    else if (n==1)
        return a;
    else if (n==2)
        return b;
    else if (n==3)
        return c;

    return p;
}
