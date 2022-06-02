#include<stdio.h>
int main() {
 
    char str1[20];
    char str2[4];
    char str3[5];
    printf("Enter 1st string: ");
    scanf("%s",&str1);
    printf("Enter 2nd string: ");
    scanf("%s",&str2);
    int n = 0;
    int r=0;
    int arr[20];
    while(str2[n] != '\0'){
        n++;
    }
    // printf("%d",n);
    printf("Enter 3rd string: ");
    scanf("%s",&str3);
    int j=0;
    int t;
    int count=0;
   
    for(int i=0;i<20;i++){
        if(str1[i]==str2[j]){
            count++;
            if(j==0){
                t=i;
               
            }
           
            j++;
           
        }
        else{
            count=0;
            j=0;
           
        }
        if(count == n){
            //arr[i];
           
            printf("substring found at index: %d \n",t);
            r=1;
        }
       
       
   
    }
    if(count!=n&&r!=1){
        printf("Substring not exist");
        
    }
    
    
   

    return 0;
}