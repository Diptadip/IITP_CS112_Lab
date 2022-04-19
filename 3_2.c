#include<stdio.h>
int main(){
    int n,row;
    printf("Enter the terms in first row: ");
    scanf("%d",&n);
    row=(n+1)/2;
    for(int i=0; i< row; i++){
        //printing preceding spaces
        for(int space=0; space<i; space++){
            printf("  ");
        }
        //printing asterik
        for(int j=0; j<n-i*2; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}