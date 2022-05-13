#include<stdio.h>

int printMatrix(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][3]={0};
    printf("Enter 9 integers: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The entered matrix is \n");
    printMatrix(arr);
    int t[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            t[i][j]=arr[j][i];
        }
    }
    printf("The transpose matrix is \n");
    printMatrix(t);
}