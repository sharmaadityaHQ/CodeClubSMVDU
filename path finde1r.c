#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d-> ",i);
    }
    for(i=2;i<=n;i++)
        printf("%d-> ",i*n);
    for(j=3;j<=(n+1);j++)
    {
        if(j%2==1)
        {
            for(i=n;i>1;i--)
                printf("%d-> ",(i*n)-s);
        }
        if(j%2==0)
        {
            for(i=2;i<=n;i++)
                printf("%d-> ",(i*n)-s);
        }
        s++;
    }
    printf("Stop");
    
    
    return 0;
}
