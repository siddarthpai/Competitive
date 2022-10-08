#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[50]
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        for (int y=0;y<t;y++)
        {
            scanf("%d",&n);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
        t--;
    }  
    return 0;
    

}