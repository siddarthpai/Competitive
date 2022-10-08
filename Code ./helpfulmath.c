#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void main()
{
    char s[100];
    int x=0;
    char ch;
    int a[100];
    scanf("%s",&s);
    for(int i = 0; i < strlen(s); i++) 
    {
        ch=s[i];
        if(isdigit(ch))
        {
            a[x]=atoi(ch);
            x++;
        }
        int length=sizeof(a)/sizeof(a[0]);
        for (int j = 0 ; j < length - 1; j++)
        {
            for (int k = 0 ; k < length - j - 1; k++)
            {
                if (a[k] > a[k+1]) /* For decreasing order use < */
                {
                    int swap_var = a[k];
                    a[k] = a[k+1];
                    a[k+1] = swap_var;
                }
            }
        }  

        for(int l=0; l<length;l++)
        {
            printf("%d",a[l]);
        } 
    }
}