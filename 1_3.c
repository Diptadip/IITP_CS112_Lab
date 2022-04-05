#include <stdio.h>
int main(){
    float p=1,r=0,a;
    printf("Enter principle value: ");
    scanf("%f",&p);
    printf("Enter rate in percent: ");
    scanf("%f",&r);
    r=r/100.0;//converting rate from percent to decimal
    //calculating CI amount at the end of 3 years
    a=p*(1+r)*(1+r)*(1+r);
    printf("The amount at the end of 3 years is: %.3f\n",a);
    return 0;
}
/*
Enter principle value: 100
Enter rate in percent: 3
The amount at the end of 3 years is: 109.273
*/