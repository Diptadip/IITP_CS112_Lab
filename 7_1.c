#include<stdio.h>
#define SIZE 2

void printMatrix(float arr[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%4.1f",arr[i][j]);
        }
        printf("\n");
    }
}
void sum(float a[SIZE][SIZE],float b[SIZE][SIZE]){
    float c[SIZE][SIZE];
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            c[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("Sum matrix is...\n");
    printMatrix(c);
}
int main()
{
    float a[SIZE][SIZE],b[SIZE][SIZE];

    printf("Enter %d element for 1st matrix\n",SIZE*SIZE);
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%f",&a[i][j]);
        }
    }

    printf("Enter %d element for 2nd matrix\n",SIZE*SIZE);
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%f",&b[i][j]);
        }
    }

    printf("The 2 matrices are...\n");
    printMatrix(a);
    printf("And\n");
    printMatrix(b);
    sum(a,b);
}