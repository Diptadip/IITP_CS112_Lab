#include <stdio.h>
int main(){
    int ft=0,in=0;
    double cm=0.0;
    printf("Enter your height in feet and inch: ");
    scanf("%d%d",&ft,&in);
    //calculating height in centimeters
    cm=30.48*ft + 2.54*in;
    printf("Your height in centimeter is: %.2f",cm);
    return 0;
}
/*
Enter your height in feet and inch: 5 8
Your height in centimeter is: 172.72
*/
