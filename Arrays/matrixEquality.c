// Check for equality of 2 matrices
#include<stdio.h>
int main() {
    int a[3][3],b[3][3],r,c,t,flag=0;
    printf("Enter matrix1 elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    printf("Enter matrix2 elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            if(a[r][c]!=b[r][c]){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("Not equal");
    }
    else{
        printf("Equal");
    }
}