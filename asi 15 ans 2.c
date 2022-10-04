#include<stdio.h>
int smallest_value(int b[],t)
{
    int i,min;
    for(i=0;i<=t;i++)
    {
        scanf("%d",&b[i]);
    }
    min=b[0];
    for(i=0;i<=t;i++)
    {
        if(min>b[i])
        {
            min=b[i];
        }
    }
    return min;
}
