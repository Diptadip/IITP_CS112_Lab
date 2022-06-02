#include <stdio.h>

int removeDuplicates(int arr[], int n)
{

	if (n == 0 || n == 1)
		return n;

	int temp[n];
	int j = 0;
	for (int i = 0; i < n - 1; i++)
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];

	temp[j++] = arr[n - 1];

	for (int i = 0; i < j; i++)
		arr[i] = temp[i];

	return j;
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
