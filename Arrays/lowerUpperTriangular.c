// Print lower and upper triangular matrix
#include<stdio.h>
int main() {
    int a[3][3],r,c;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    printf("Upper triangle matrix\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            if(r<c){
                printf("%d ",a[r][c]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Lower triangle matrix\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            if(r>c){
                printf("%d ",a[r][c]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}