//  *
// ***
//*****
#include<stdio.h>
int main() {
    int i,k,l=2,j;
    for(i=0;i<3;i++){
        for(k=l;k>0;k--){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        l--;
        printf("\n");
    }
}