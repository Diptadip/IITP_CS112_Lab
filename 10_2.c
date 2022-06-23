#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int cin;
    char name[20];
    int acno;
    float balance;
}Account;

int AccSearch(Account* ac,int n,int no){
    for(int i=0;i<n;i++){
        if(ac[i].acno==no){
            return i;
        }
    }
    return -1;
}
Account createAccount(Account* a,int n){
    Account ac;
    int idx;
    do{
        printf("\n-------Creating new Account------\n");
        printf("Enter customer identity Number: ");
        scanf("%d",&ac.cin);
        printf("Enter customer name: ");
        fflush(stdin);
        scanf("%[^\n]s",&ac.name);
        printf("Enter account number: ");
        scanf("%d",&ac.acno);
        idx=AccSearch(a,n,ac.acno);
        printf("Enter initial deposit amount: ");
        scanf("%f",&ac.balance);
    }while(idx>=0 && printf("Account no already exists..Enter again\n"));
    printf("Account Created successfully\n");
    return ac;
}

void deposit(Account* ac,int n){
     if(ac==NULL){
        printf("No account exists. Create account\n");
        return;
    }
    int acc;
    printf("Enter Account number: ");
    scanf("%d",&acc);
    int idx=AccSearch(ac,n,acc);
    if(idx>=0){
        float amt;
        printf("Enter amount to deposit: ");
        scanf("%f",&amt);
        ac[idx].balance+=amt;
        printf("\n------ %f amount deposited in account no xx%d ------\n ",amt,acc%100);
    }
    else{
        printf("No account exists with account no %d, please recheck..\n",acc);
    }
}

void withdraw(Account* ac,int n){
     if(ac==NULL){
        printf("No account exists. Create account\n");
        return;
    }
    int acc;
    printf("Enter Account number: ");
    scanf("%d",&acc);
    int idx=AccSearch(ac,n,acc);
    if(idx>=0){
        float amt;
        printf("Enter amount to withdraw: ");
        scanf("%f",&amt);
        if(amt>ac[idx].balance){
            printf("Not enough balance !\n");
        }
        else{
            ac[idx].balance-=amt;
            printf("\n------ %f amount withdrawn from account no xx%d ------\n ",amt,acc%100);
        }
        
    }
    else{
        printf("No account exists with account no %d, please recheck..\n",acc);
    }
}

void transfer(Account* ac,int n){
     if(ac==NULL){
        printf("No account exists. Create account\n");
        return;
    }
    int s_no,r_no;
    float amt;
    printf("Enter Sender Account number: ");
    scanf("%d",&s_no);
    printf("Enter receiver Account number: ");
    scanf("%d",&r_no);
    printf("Enter amount to transfer: ");
    scanf("%f",&amt);

    int s=AccSearch(ac,n,s_no);
    int r=AccSearch(ac,n,r_no);

    if(s>=0 && r>=0){
        if(ac[s].balance<amt){
            printf("Not enough balance !\n");
        }
        else{
            ac[s].balance-=amt;
            ac[r].balance+=amt;
            printf("\n------ %f amount transferred from account no xx%d to xx%d------\n ",amt,s_no%100,r_no%100);
        }
    }else{
        printf("Incorrect account number, please recheck ! \n");
    }
}

void display(Account* ac,int n){
    if(ac==NULL){
        printf("No account exists. Create account\n");
        return;
    }
    int acc;
    printf("Enter Account number: ");
    scanf("%d",&acc);
    int idx=AccSearch(ac,n,acc);
    if(idx>=0){
        printf("%-30s: %d\n","Customer identification number",ac[idx].cin);
        printf("%-30s: %s\n","Customer Name",ac[idx].name);
        printf("%-30s: %d\n","Account No",ac[idx].acno);
        printf("%-30s: %.2f\n","Current balance",ac[idx].balance);
    }else{
        printf("Incorrect account number, please recheck ! \n");
    }
}

Account* create(Account* ac,int n){
    ac=(Account*)realloc(ac,n+1);
    ac[n]=createAccount(ac,n+1);
    return ac;
}

int main(){
    Account* ac=NULL;
    int n=0;
    int choice=0;

    do{
        printf("Enter your choice..\n");
        printf("1. create account\n2. Deposit\n3. Withdraw\n4. Transfer\n5. display\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            ac=create(ac,n);
            n++;
            break;

        case 2:
            deposit(ac,n);
            break;
        
        case 3:
            withdraw(ac,n);
            break;
        
        case 4:
            transfer(ac,n);
            break;

        case 5:
            display(ac,n);
            break;
        
        default:
            printf("Wrong input..enter again\n");
            choice=-1;
            break;
        }
        if(choice !=-1){
            printf("Try again ? (1/0)");
            scanf("%d",&choice);
        }

    }while (choice);
    free((void*)ac);
}

                                                                                                                                                                                