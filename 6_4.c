/* An efficient program to print
subset with sum as given k */
#include <stdio.h>

/* Returns true if the there is a
subarray of arr[] with a sum
equal to 'k' otherwise returns
false. Also, prints the result */
int subset(int arr[], int n, int k)
{
	/* Initialize curr_sum as
	value of first element and
starting point as 0 */
	int curr_sum = arr[0], start = 0, i;

	/* Add elements one by one to
curr_sum and if the curr_sum
	exceeds the sum, then remove
starting element */
	for (i = 1; i <= n; i++) {
		// If curr_sum exceeds the sum,
		// then remove the starting elements
		while (curr_sum > k && start < i - 1) {
			curr_sum = curr_sum - arr[start];
			start++;
		}

		// If curr_sum becomes equal to sum,
		// then return true
		if (curr_sum == k) {
           int x=i-1;
             int y=start;
                for(int i=y;i<=x;i++){
                    printf("%d\n",  arr[i]);
                }

			return 1;
		}

		// Add this element to curr_sum
		if (i < n)
			curr_sum = curr_sum + arr[i];
	}

	// If we reach here, then no subarray
	printf("Error");
	return 0;
}

// Driver program to test above function
int main()
{  
    int n,k;
    printf("Enter value of n and sum: ");
    scanf("%d%d",&n , &k);
	int arr[n];
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
	subset(arr, n, k);
	return 0;
}