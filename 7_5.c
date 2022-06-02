#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int r1,c1,r2,c2;
    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d",&r2,&c2);

    int A[r1][c1],B[r2][c2];
    if(c1!=r2){
        printf("Incompatible matrices , multiplication not possible\n");
        exit(0);
    }
    srand(time(0));

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            A[i][j]=rand()%100;
        }
    }
    printf("The 1st matrix is\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            B[i][j]=rand()%100;
        }
    }
    printf("The 2nd matrix is\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%4d",B[i][j]);
        }
        printf("\n");
    }

    int r=r1;
    int c=c2;
    int C[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            C[i][j]=0;
            for(int k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("The matrix after multiplication is\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%6d",C[i][j]);
        }
        printf("\n");
    }
}