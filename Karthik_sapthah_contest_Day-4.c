#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],N,k;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    for(int i=0; i<N; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the length of the subarray: ");
    scanf("%d",&k);
    int max =0, sum=0;
    for(int i =0; i<k;i++)
    {
       sum = sum + arr[i];
    }
    max = sum;
    int j =0;
    for(int i=k;i<N;i++)
    {
        sum = sum - arr[j] + arr[i];
        if(sum>max)
            max = sum;
        j++;
    }
    printf("Maximum sum = %d",max);
    return 0;
}
