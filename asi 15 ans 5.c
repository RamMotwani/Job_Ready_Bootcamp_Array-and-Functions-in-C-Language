#include<stdio.h>
int adjacent_duplicate(int b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==b[i+1])
        {
            return b[i];
        }

    }
    if(i==n)
    {
        printf("array does not have any adjacent duplicate value");
    }
}
