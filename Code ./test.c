/* #include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target)
{
    int *arr=(int *)malloc((2)*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                arr[0]=i;
                arr[1]=j;
                break;
            }
        }
    }
    return arr;

}

void main()
{
    int nums[100];
    for(int i=0;i<10;i++)
    {
        scanf("%d",nums[i]);
    }
    int target;
    scanf("%d",&target);
    int size = sizeof(nums)/sizeof(nums[0]);
    int *data = twoSum(nums,size,target);
    printf("%d %d",data[0],data[1]);
    free(data);
} */

/* //watermelon Question(Code Forces)
#include <stdio.h>

int main()
{
    int w;
    scanf("%d",&w);
    if(w%2==0 && w>2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
} */

/* //registration system

#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    char s[100];
    char a[100];
    int i=0;
    while(n!=0)
    {
        int size=sizeof(a)/sizeof(a[0]);
        scanf("%s",&s);
        if(size == 0 )
        {
            printf("OK");
            a[i]=s;
            i++;
        }
        else
        {
            for(int j=0;j<size;j++)
            {
                if(a[j]!=s)
                {
                    printf("OK");
                    a[i]=s;
                    i++;
                }
                else if(a[j]==s)
                {
                    int b=1;
                    for(int k=0;k<size;k++)
                    {
                        while(a[k]!=s)
                        {
                            strcat(s,b);
                            printf("%s",s);
                            a[i]=s;
                            i++;
                        }
                    }

                }
            }
        }
    n--;
    }
} */

#include<stdio.h>
#include<stdlib.h>

int choice_based_arithemetic(int input1,int intput2, int input3)
{
    int result;
    switch(input3)
    {
        case 1: result=input1+intput2;
                break;

        case 2: result=input1-intput2;
                break;
        
        case 3:
                result=input1*intput2;
                break;
        case 4: result=input1/intput2;
                break;
    
    }
    return result;
    
}
void main()
{
    int x=choice_based_arithemetic(1,2,1);
    printf("%d",x);
}
