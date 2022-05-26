#include<stdio.h>
int main(){
    char str1[20],str2[4],str3[5];
    int c1=0,c2=0,c3=0;
    printf("Enter the 1st string: ");
    scanf("%s",&str1);
    printf("Enter the 2nd string: ");
    scanf("%s",&str2);
    printf("Enter the 3rd string: ");
    scanf("%s",&str3);

    printf("String 1: %s\n",str1);
    printf("String 2: %s\n",str2);
    printf("String 3: %s\n",str3);

    while(str1[c1++]);
    while(str2[c2++]);
    while(str3[c3++]);
    int flag;
    for(int i=0;i<=c1-c2;i++){
        for(int j=i;j<i+c2;j++){
            flag=1;
            if(str1[j]!=str2[j-i]){
                flag=0;
                break;
            }
        }
        if(flag)
            break;
    }
    printf("%d ",c1);
    if(flag)
        printf("ache\n");
    else
        printf("nei\n");
}