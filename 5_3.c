#include<stdio.h>

int main(){
    char arr[100];
    printf("Enter the floating point number: ");
    scanf("%s",&arr);
    for(int i=0;i<100;i++){
        if(arr[i]=='.'){
            printf("%c",arr[i-1]);
            break;
        }
    }
}