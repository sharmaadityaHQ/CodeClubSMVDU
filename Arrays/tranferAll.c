// Transfer such that even positions of All get content from First and odd positions from Second array
#include<stdio.h>
int main() {
    int First[10],Second[10],All[20],i,j,k,n1,n2;
    printf("Enter no of elements\n");
    scanf("%d",&n1);
    printf("Enter elements\n");
    for(i=0;i<n1;i++){
        scanf("%d",&First[i]);
    }
    printf("Enter no of elements\n");
    scanf("%d",&n2);
    printf("Enter elements\n");
    for(j=0;j<n2;j++){
        scanf("%d",&Second[j]);
    }
    i=j=0;
    for(k=0;k<n1+n2;){
        All[k++]=First[i++];
        All[k++]=Second[j++];
    }
    for(i=0;i<n1+n2;i++){
        printf("%d ",All[i]);
    }
}