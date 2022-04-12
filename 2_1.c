#include <stdio.h>
int main()
{
    float lpa=0,sqm=0,price=0;

    printf("Enter your income in lakh per annum: ");
    scanf("%f",&lpa);

    printf("Enter the floor area you want in sqm: ");
    scanf("%f",&sqm);

    if(lpa<1.0){
        if(sqm>40.0){
            printf("You are only allowed upto 40 sqm.\n");
            return 0;
        }else if(sqm<=30){
            price = sqm*5000;
        }
        else{
            price = (sqm-30)*8000 + 30*5000;
        }
    }else if(lpa < 5.0){
        if(sqm>50.0){
            printf("You are only allowed upto 50 sqm.\n");
            return 0;
        }else if(sqm<=40){
            price = sqm*7000;
        }
        else{
            price = (sqm-40)*10000 + 40*7000;
        }
    }else{
        if(sqm>60.0){
            printf("You are only allowed upto 60 sqm.\n");
            return 0;
        }else if(sqm<=50){
            price = sqm*9000;
        }
        else{
            price = (sqm-50)*11000 + 50*9000;
        }
    }
    printf("The price you have to pay is: %.2f",price);
    return 0;
}
/*
Enter your income in lakh per annum: 1.2
Enter the floor area you want in sqm: 45
The price you have to pay is: 330000.00
*/