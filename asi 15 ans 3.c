#include<stdio.h>
int sorting(int b[],int t)
{
    int i,j,x;
    for(i=0;i<t;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(b[i]>b[j])
            {
                x=b[j];
                b[j]=b[i];
                b[i]=x;
            }
        }
    }
    for(i=0;i<t;i++)
    {
    return b[i];
    }

}
