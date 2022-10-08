#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[100];
    scanf("%s",&a);
    int c;
    int pas=1;
    for(int i=0;i<strlen(a);i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                
            }
            
        }
        if(c == 0)
        {
            pas++;
        }
        c=0;
    }
    if( pas %2 ==0)
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }
    return 0;
}