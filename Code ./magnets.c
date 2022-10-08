#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(j!=n-1)
        {
            if(a[j]!=a[j+1])
            {
                c+=1;
            }
        }
    }
    printf("%d",(c+1));
    return 0;
}