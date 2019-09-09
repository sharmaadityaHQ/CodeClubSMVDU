// Delete array element from user given position
#include<stdio.h>
int main() {
    int a[50],i,s,p;
    printf("Enter size\n");
    scanf("%d",&s);
    printf("Enter numbers\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position\n");
    scanf("%d",&p);
    for(i=p-1;i<s-1;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<s-1;i++){
        printf("%d ",a[i]);
    }
}