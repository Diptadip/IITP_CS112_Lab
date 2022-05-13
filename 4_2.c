#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    char rootsType;
    float real,img,r1,r2,r;
    printf("Enter coeffs a b c in order :");
    scanf("%d %d %d",&a,&b,&c);

    float d= b*b-4*a*c;//discriminant

    if (d<0)
        rootsType='c';
    else if(d==0)
        rootsType='e';
    else
        rootsType='r';

    switch (rootsType)
    {
    case 'c':
        real= -b/(2.0*a);
        img= sqrt(fabs(d))/(2.0*a);
        printf("roots are complex , %.2f + %.2fi and %.2f - %.2fi\n",real,img,real,img);
        break;

    case 'r':
        r1= -b/(2.0*a) + sqrt(d)/(2*a);
        r2= -b/(2.0*a) - sqrt(d)/(2*a);
        printf("Roots are distinct and real, %.2f and %.2f\n",r1,r2);
        break;

    case 'e':
        r= -b/(2.0*a);
        printf("Roots are equal and real, %.2f\n",r);
        break;
    
    default:
        break;
    }

}
/*
Enter coeffs a b c in order :1 -4 13
roots are complex , 2.00 + 3.00i and 2.00 - 3.00i
*/