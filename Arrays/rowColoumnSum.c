#include<stdio.h>
int main() {
    int a[3][3],r,c,rs[3],cs[3];
    printf("Enter matrix elements\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<3;r++){
        rs[r]=0;
        for(c=0;c<3;c++){
            rs[r]=a[r][c]+rs[r];
        }
    }
    for(c=0;c<3;c++){
        cs[c]=0;
        for(r=0;r<3;r++){
            cs[c]=cs[c]+a[r][c];
        }
    }
    for(r=0;r<3;r++){
        printf("%d. %d\n",r+1,rs[r]);
    }
    for(c=0;c<3;c++){
        printf("%d. %d\n",c+1,cs[c]);
    }
}