#include<stdio.h>

void main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
        printf("%d",arr[i]);
    }
}