#include <stdio.h>
#include<stdlib.h>

int* reverseArray(int*arr,int n){
    int* rev=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        rev[i]=arr[n-1-i];
    }
    return rev;
}
int main(){
    int size,n;
    printf("Enter an even array length: ");
    scanf("%d",&size);
    n=size/2;
    int* arr=(int*)malloc(size*sizeof(int));
    int* a=(int*)malloc(n*sizeof(int));
    int* b=(int*)malloc(n*sizeof(int));
    printf("Enter %d integers: ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=arr[i];
        b[i]=arr[n+i];
    }
    a=reverseArray(a,n);
    b=reverseArray(b,n);
    for(int i=0;i<n;i++){
        arr[i]=a[i];
        arr[n+i]=b[i];
    }
    printf("The array after the operations is: ");
    for(int i=0;i<size;i++){
        printf("%3d",arr[i]);
    }
}