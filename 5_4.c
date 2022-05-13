#include<stdio.h>

int* bubbleSort(int arr[10]){
    for (int i = 9; i>0; i--){ // number of passes
        for (int j = 0; j <i; j++){ // number of comparisons in each pass
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int arr[10]={0};
    printf("Enter 10 integers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int* sorted =bubbleSort(arr);
    printf("The sorted array is: ");
    for(int i=0;i<10;i++){
        printf("%3d",sorted[i]);
    }
}