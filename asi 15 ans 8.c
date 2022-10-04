#include<stdio.h>
unique_elements(int b[],int n)
{
    int i;
    int freq[100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        freq[b[i]]++;
    }
    for(i=0;i<=99;i++)
    {
        if(freq[i]==1)
        {
            printf("%d",i);
        }
    }

}


