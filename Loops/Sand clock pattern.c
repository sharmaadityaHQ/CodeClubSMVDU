//Input : 5

//Output :

//5*5*5*5*5*5*5*5*5*5
//--4*4*4*4*4*4*4*4
//----3*3*3*3*3*3
//------2*2*2*2
//--------1*1
//---------*
//--------1*1
//------2*2*2*2
//----3*3*3*3*3*3
//--4*4*4*4*4*4*4*4
//5*5*5*5*5*5*5*5*5*5

#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i,j,k,l,x=0,y=0,z,a,b,c;
scanf("%d",&n);
a=(2*n)+1;
b=(4*n)-1;
c=b;
z=n;
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    {
        if(j<x)
        {
            printf("-");
        }
        else if(j>=x && j<c)
        {
            if(j%2==0)
            {
                printf("%d",z);
            }
            else
            {
                printf("*");
            }
        }
    }
    if(i<n-1)
    {
        z--;
        x=x+2;
        c=c-2;
    }
    else if(i>n)
    {
        z++;
        x=x-2;
        c=c+2;
    }
    else if(i==n-1)
    {
        x=x+1;
        c=c-1;
    }
    else if(i==n)
    {
        x=x-1;
        c=c+1;
    }
    printf("\n");
}

}