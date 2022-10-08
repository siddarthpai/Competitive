#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x,y,z,c;
    while(n!=0)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y+z>=2)
        {
            c++;
        }
        n--;
    }
    printf("%d",c);
    return 0;
}