#include<stdio.h>

int main(){
    int hdfc=0,sbi=0,axis=0,prime=0;
    float price_hdfc,price_sbi,price_axis;
    float price=0,min;
    int ch=0;
    char card;
    
    printf("Enter the cost of your phone: ");
    scanf("%f",&price);

    printf("Enter 1 if you have a Prime Membership: ");
    scanf("%d", &ch);
    if(ch==1) prime=1;
    ch=0;

    printf("Enter 1 if you have a HDFC card: ");
    scanf("%d",&ch);
    if(ch==1) hdfc=1;
    ch=0;
    //calculating for HDFC card
    if(hdfc){
        if(price < 10000){
            printf("cost must be atleast 10,000 to avail this card\n");
        }else{
            float disc=0.1 * price;
            if(disc > 1250) disc =1250;
                price_hdfc=price-disc;
            if(prime){
                price_hdfc-=0.05*price_hdfc;
            }
        }
    }
    

    printf("Enter 1 if you have a SBI card: ");
    scanf("%d",&ch);
    if(ch==1) sbi=1;
    ch=0;
    //calculating for SBI card
    if(sbi){
        if(price < 10000){
            printf("cost must be atleast 15,000 to avail this card\n");
        }else{
            float disc=0.15 * price;
            if(disc > 1250) disc =1250;
                price_sbi=price-disc;
            if(prime){
                price_sbi-=0.05*price_sbi;
            }
        }
    }    

    printf("Enter 1 if you have a AXIS card: ");
    scanf("%d",&ch);
    if(ch==1) axis=1;
    ch=0;
    //calculating for AXIS card
    if(axis){
            float disc=0.05 * price;
            if(disc > 2000) disc =2000;
                price_axis=price-disc;
            if(prime){
                price_axis-=0.05*price_axis;
            }
        
    }
    //to check the best offer
    min=price;

    //if user has none of the 3 cards
    if(!hdfc && !sbi && !axis){
        if(prime){
            price-= 0.05*price;
        }
        printf("Using ordinary card , the value is: %.2f\n",price);
    }
    //printing all available options
    if(hdfc){
        printf("Usign HDFC the paybale amount is: %.2f\n",price_hdfc);
        if(price_hdfc<min) {
            card='h';
            min=price_hdfc;
        }
    }
    if(sbi){
        printf("Usign SBI the paybale amount is: %.2f\n",price_sbi);
        if(price_sbi<min){
            card='s';
            min=price_sbi;
        } 
    }
    if(axis){
        printf("Usign AXIS the paybale amount is: %.2f\n",price_axis);
        if(price_axis<min){
            card='a';
            min=price_axis;
        } 
    }

    //printing the best option
    switch(card){
        case 'h':
            printf("Best option is to use HDFC card\n");
            break;
        
        case 's':
            printf("Best option is to use SBI card\n");
            break;

        case 'a':
            printf("Best option is to use AXIS card\n");
            break;

        default:
            printf("Use ordinary card");
    }
   

    return 0;
}
/*
Enter the cost of your phone: 15000 
Enter 1 if you have a Prime Membership: 1
Enter 1 if you have a HDFC card: 1
Enter 1 if you have a SBI card: 0
Enter 1 if you have a AXIS card: 1
Usign HDFC the paybale amount is: 13062.50
Usign AXIS the paybale amount is: 13537.50
Best option is to use HDFC card
*/