#include<stdio.h>
int greatest_value(int b[],t)
{
    int i,max;
    for(i=0;i<=t;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<=t;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    return max;
}
