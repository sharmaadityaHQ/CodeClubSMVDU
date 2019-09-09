// Merge 2 sorted arrays
#include<stdio.h>
int main() {
    int a[10],b[10],c[20],i,j,k=0,s1,s2;
    printf("Enter no of elements\n");
    scanf("%d",&s1);
    printf("Enter elements\n");
    for(i=0;i<s1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no of elements\n");
    scanf("%d",&s2);
    printf("Enter elements\n");
    for(j=0;j<s2;j++){
        scanf("%d",&b[j]);
    }
    i=j=0;
    while(i<s1 &&j<s2){
        if(a[i]==b[j]){
            c[k++]=a[i];
            i++;
            c[k++]=b[j];
            j++;
        }
        if(a[i]>b[j]){
            c[k++]=b[j];
            j++;
        }
        if(a[i]<b[j]){
            c[k++]=a[i];
            i++;
        }
    }
    while(i<s1){
        c[k++]=a[i];
        i++;
    }
    while(j<s2){
        c[k++]=b[j];
        j++;
    }
    for(k=0;k<s1+s2;k++){
        printf("%d ",c[k]);
    }
}