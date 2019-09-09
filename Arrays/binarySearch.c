// Binary Search
#include<stdio.h>
int main() {
    int a[10],i,j,size,first,last,mid,found=0,num;
    printf("Enter no of elements\n");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to search\n");
    scanf("%d",&num);
    first=0;
    last=size-1;
    while((first<=last) && found==0){
        mid=(first+last)/2;
        if(a[mid]==num){
            found=1;
            break;
        }
        if(num>a[mid]){
            first=mid+1;
        }
        else if(num<a[mid]){
            last=mid-1;
        }
    }
    if(found==0){
        printf("Not found\n");
    }
    else{
        printf("Found at %d position",mid+1);
    }
}