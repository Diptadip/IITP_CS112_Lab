#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void balance(int arr[],int n,int k){
    int max=0;
    int min=k;

    for(int i=0;i<k;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    for(int i=k;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }

    if(arr[max]>arr[min]){
        swap(&arr[max],&arr[min]);
        balance(arr,n,k);
    }
    else{
        printf("The balanced array is \n");
        for(int i=0;i<n;i++){
            printf("%3d",arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n,k;
    printf("Enter array size: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k: ");
    scanf("%d",&k);

    balance(arr,n,k);
}