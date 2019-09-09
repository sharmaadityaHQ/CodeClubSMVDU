// Print transpose of a matrix using another matrix
#include<stdio.h>
int main() {
    int a[3][3],b[3][3],r,c;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            b[r][c]=a[c][r];
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d ",b[r][c]);
        }
        printf("\n");
    }
}
