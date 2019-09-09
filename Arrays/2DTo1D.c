// Transfer elements of 2D array to 1D array in reversed order
#include<stdio.h>
int main() {
    int a[3][3],b[9],r,c,t,k=0;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=2;r>=0;r--){
        for(c=2;c>=0;c--){
            b[k]=a[r][c];
            k++;
        }
    }
    for(k=0;k<9;k++){
        printf("%d ",b[k]);
    }
}