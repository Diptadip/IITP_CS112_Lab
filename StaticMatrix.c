#include <stdio.h>
 
// Here the parameter is a static 2D array
void assign(int m, int n, int arr[m][n])
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
 
    int arr[m][n];
 
    assign(m, n, arr);
 
    // print 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
