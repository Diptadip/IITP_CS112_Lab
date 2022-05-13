#include<stdio.h>
int power(int m,int n){
    int pow=1;
    while(n--){
        pow*=m;
    }
    return pow;
}
int main(){
    int m,n,pow;
    printf("Enter value of m and n : ");
    scanf("%d %d",&m,&n);
    printf("%d ^ %d = %d",m,n,power(m,n));
}