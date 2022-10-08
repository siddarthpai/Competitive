#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int cost;
    for(int i=1;i<=w;i++)
    {
        cost=cost+i*k;
    }
    if(cost<=n)
    {
        printf("0");
    }
    else
    {
        printf("%d",cost-n);
    }
    return 0;
    
}