#include <stdio.h>

int removeDuplicates(int arr[], int n)
{

    for ( int i = 0; i < n; i ++)  
    {  
        for ( int j = i + 1; j < n; j++)  
        {  
            if ( arr[i] == arr[j])  
            {  
                for ( int k = j; k < n - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                n--;  
                j--;      
            }  
        }  
    }  
    return n;
}


int main()
{
	int*arr;
	int n ;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	n = removeDuplicates(arr, n);
    printf("The array after removing duplicates..\n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
