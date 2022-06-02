#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,*a,*b;
    printf("Enter the size of the two arrays with a space in between: ");
    scanf("%d %d",&m,&n);
    
    a=(int*)malloc(m*sizeof(int));
    b=(int*)malloc(n*sizeof(int));

    printf("Enter %d elements for 1st array in non-decreasing manner\n",m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter %d elements for 2nd array in non-decreasing manner\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    int size=m+n;
    int*arr=(int*)malloc(size*sizeof(int));
    int k=0;
    int p1=0;
    int p2=0;
    while (p1<m && p2<n)
    {
        
        if (a[p1] < b[p2])
            arr[k++] = a[p1++];
        else
            arr[k++] = b[p2++];
    }
    while (p1 < m)
        arr[k++] = a[p1++];
 

    while (p2 < n)
        arr[k++] = b[p2++];

    for(int i=0;i<size;i++){
        printf("%3d",arr[i]);
    }
}