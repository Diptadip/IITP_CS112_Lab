#include <stdio.h>
#include <stdlib.h>
 
// Here, the parameter is an array of pointers
void assign(int** arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i + j;
        }
    }
}
 
// Program to pass the 2D array to a function in C
int main(void)
{
    int m = 5;
    int n = 5;
 
    // dynamically create an array of pointers of size `m`
    int **arr = (int **)malloc(m * sizeof(int *));
 
    // dynamically allocate memory of size `n` for each row
    for (int r = 0; r < m; r++) {
        arr[r] = (int *)malloc(n * sizeof(int));
    }
 
    assign(arr, m, n);
 
    // print 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
 
    // deallocate memory
    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);
 
    return 0;
}