// 1 2 3 4 5 6 
// 1 2 3 4 5 0 
// 1 2 3 4 0 0 
// 1 2 3 0 0 0 
// 1 2 0 0 0 0 
// 1 0 0 0 0 0 
#include<stdio.h>
int main() {
    int a[20][20],b[20],i,j,m;
    printf("Enter the size of the array\n");
    scanf("%d",&m);
    printf("Enter 1D array elements\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i+j>=m){
                a[i][j]=0;
            }
            else{
                a[i][j]=b[j];
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}