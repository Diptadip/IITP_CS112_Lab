#include<stdio.h>

void swap(int a,int b){
    printf("Values before swappping in swap method are %d and %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Value after swapping in swap method are %d and %d\n",a,b);
}

int main(){
    int a,b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a,&b);
    printf("Value before swapping in main method are %d and %d\n",a,b);
    swap(a,b);
    printf("Value after swapping in main method are %d and %d\n",a,b);
}