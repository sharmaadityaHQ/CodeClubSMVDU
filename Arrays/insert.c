// Insert new element at user given position
#include<stdio.h>
int main() {
    int a[50],i,s,p,num;
    printf("Enter size\n");
    scanf("%d",&s);
    printf("Enter numbers\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position and number to insert\n");
    scanf("%d %d",&p,&num);
    for(i=s-1;i>=p-1;i--){
        a[i+1]=a[i];
    }
    a[p-1]=num;
    for(i=0;i<=s;i++){
        printf("%d ",a[i]);
    }
}
