#include<stdio.h>
#include<string.h>

void check(char *s)
{
    if(strlen(s)>=10)
        {
            printf("%c%d%c",s[0],strlen(s),s[strlen(s)-1]);
        }
        else
        {
            printf("%s",s);
        }
}
void main()
{
    int n;
    scanf("%d",&n);
    char s[100];
    while(n!=0)
    {
        scanf("%s",&s);
        check(s);
        n--;
    }
    
}