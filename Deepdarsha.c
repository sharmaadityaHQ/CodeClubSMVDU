#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=0;i<7;i++)
    {int c=65;
        for(j=0;j<7;j++)
        {
            if((i+j)<7)
            {printf("%c",c);c++;}
            else
            printf(" ");
        }
        for(j=0;j<7;j++)
        {
            if(j<i)
            printf(" ");
            else
            {c--;printf("%c",c);}
        }
        printf("\n");
    }
    for(i=0;i<7;i++)
    {int v=66;
        for(k=0;k<7;k++)
        {
            if(k<=i)
            {printf("%c",v);v++;}
            else
            printf(" ");
        }
        for(j=0;j<7;j++)
        {
            if((i+j)<6)
            printf(" ");
            else
            {v--;printf("%c",v);}
        }
        printf("\n");
    }
   

    return 0;
}