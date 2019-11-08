#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,x, *a, i,*b;
    scanf("%d", &num);
    a = (int*) malloc(num * sizeof(int));
    b = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d\t", &x);
        a[i]=x;
    }
    for (i=0;i<num;i++)
    {b[num-1-i]=a[i];}


    for(i = 0; i < num; i++)
        printf("%d ", b[i]);
    return 0;
}

