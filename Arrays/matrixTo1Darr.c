// Transfer elements from 2D array to 1D array
#include<stdio.h>
int main() {
    int a[3][3],b[9],r,c,k=0;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    //row-wise entry 
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            b[k++]=a[r][c];
        }
    }
    //coloumn-wise entry 
    for(r=0,k=0;r<3;r++){
        for(c=0;c<3;c++){
            b[k++]=a[c][r];
        }
    }
    for(k=0;k<9;k++){
        printf("%d ",b[k]);
    }
}