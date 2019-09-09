// Exchange first row with last row
#include<stdio.h>
int main() {
    int a[3][3],r,c,t;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(c=0;c<3;c++){
        t=a[0][c];
        a[0][c]=a[2][c];
        a[2][c]=t;
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
}