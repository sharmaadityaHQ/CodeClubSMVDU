// Sum of alternate elements (row-major)
#include<stdio.h>
int main() {
    int a[3][3],r,c,ctr=0,sum=0;
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            if(ctr%2==0){
                sum+=a[r][c];
            }
            ctr++;
        }
    }
    printf("Sum=%d",sum);
}
    