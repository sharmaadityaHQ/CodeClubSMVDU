#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int k=(floor(sqrt(b))-ceil(sqrt(a))+1);
    printf("%d\n",k);// k is the number of perfect squares between number a and b
}
