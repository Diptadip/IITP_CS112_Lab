#include <stdio.h>
int main(){

    int m,n,rev;
    printf("Enter an integer: ");
    scanf("%d",&n);
    m=n;
    rev=0;// to store the reverse
    while(m){
        rev=rev*10 + m%10;
        m/=10;
    }
    printf("The reverse of %d is %d.\n",n,rev);
    return 0;
}