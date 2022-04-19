#include<stdio.h>
#include<math.h>
int main()
{
    float ths,x_deg,x_rad,term,sum=0;
    int sign=1;
    printf("Enter x in degrees: ");
    scanf("%f",&x_deg);
    printf("Enter threshold value: ");
    scanf("%f",&ths);

    //coverting degrees to radians
    x_rad=x_deg * 3.14/180;
    term=1;

    for(int i=1 ; fabs(term)>ths ; i+=2,sign*=-1){
       term=sign*pow(x_rad,i);
       int fact =1;
        for(int j=1;j<=i;j++){    
            fact=fact*j;    
        }    
        term=term/fact;
        //adding terms only if absolute value of a term is more than a threshold
        if(fabs(term)>ths){
            sum+=term;
        }
    }
    printf("Value of sin(%.2f) is : %f",x_deg,sum);
    return 0;
}