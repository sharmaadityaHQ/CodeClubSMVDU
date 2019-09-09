// Exchange first coloumn with last coloumn
#include<stdio.h>
int main() {
    int a[3][3],r,c,t;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<3;r++){
        t=a[r][0];
        a[r][0]=a[r][2];
        a[r][2]=t;
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
}