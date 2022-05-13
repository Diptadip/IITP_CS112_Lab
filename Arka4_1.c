#include<stdio.h>

int main()
{
    int n,idx=0;
    int arr[100]={0};
    int newArr[100]={0};

    printf("Enter the array size: ");
    scanf("%d",&n);

    printf("Enter %d integers: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int count=0;
        int isPrime=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
       
        for(int j=2;j<count;j++){
            if(count%j==0)
                isPrime=0;
        }
        if(count==1) isPrime=0;
        if(!isPrime){
            newArr[idx++]=arr[i];
        }
    }

    printf("After removing duplicates ...\n");
    for(int i=0;i<idx;i++){
        printf("%3d",newArr[i]);
    }
    return 0;

}