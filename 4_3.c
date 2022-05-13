#include <stdio.h>
#include <math.h>

int main(){

    int m,n,rev,r,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    m=n;
    rev=0;// to store the reverse
    while(m){
        r=m%10;
        sum+=r;
        rev=rev*10 + r;
        m/=10;
    }
    sum=abs(sum);
    printf("The reverse of %d is %d.\nSum of digits = %d\n",n,rev,sum);
    return 0;
}
/*
N.B. Trailing Zeros in the input integer and its reverse integer is ignored.

OUTPUT:
Enter an integer: -3200
The reverse of -3200 is -23.
Sum of digits = 5

Enter an integer: 1234
The reverse of 1234 is 4321.
Sum of digits = 10
*/
