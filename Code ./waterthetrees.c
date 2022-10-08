#include<stdio.h>
#include<stdlib.h>

void main()
{
    int arr[100];
    int n;
    scanf("%d",&n);
    int max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int days=1;
    for(int j=0;j<n;j++)
    {
        while(arr[j]!=max)
        {
            if(max%2==0)
            {
                if(days%2==0 && arr[j]<=max)
                {
                    arr[j]+=2;
                }
            }
            else
            {
                if(days%2==0 && arr[j]<=max)
                {
                    arr[j]+=1;
                }
            }
        }
    }
    
}