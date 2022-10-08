#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    while(k!=0)
    {
        int d=n%10;
        if(d!=0)
        {
            n-=1;
        }
        else if(d==0)
        {
            n=n/10;
        }
        k--;
    }
    printf("%d",n);
    return 0;
}