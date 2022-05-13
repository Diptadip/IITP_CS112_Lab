#include<stdio.h>
int main()
{
    int n,amt=0;
    int i,ii,v,x,xx,l,c;
    i=ii=v=x=xx=l=c=0;

    printf("Enter the amount: ");
    scanf("%d",&amt);
    n=amt;

    c=amt/100;
    amt%=100;

    l=amt/50;
    amt%=50;

    xx=amt/20;
    amt%=20;

    x=amt/10;
    amt%=10;

    v=amt/5;
    amt%=5;

    ii=amt/2;
    amt%=2;

    i=amt;

    printf("%d can be given in ..\n\n",n);
    printf("%d 100 Rupees note\n",c);
    printf("%d 50 Rupees note\n",l);
    printf("%d 20 Rupees note\n",xx);
    printf("%d 10 Rupees note\n",x);
    printf("%d 5 Rupees note\n",v);
    printf("%d 2 Rupees note\n",ii);
    printf("%d 1 Rupee note\n",i);

}
/*
Enter the amount: 2598
2598 can be given in ..

25 100 Rupees note
1 50 Rupees note
2 20 Rupees note
0 10 Rupees note
1 5 Rupees note
1 2 Rupees note
1 1 Rupee note
*/