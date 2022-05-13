#include<stdio.h>

int rev(int n){
    int m=0;
    while(n){
        m=m*10 + n%10;
        n/=10;
    }
    return m;
}

int isPalind(int n){
    return (n==rev(n));
}
int main()
{
    int n=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    isPalind(n) ? printf("It is palindrome\n") : printf("It is not palindrome\n");
}