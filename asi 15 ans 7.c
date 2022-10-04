#include<stdio.h>
count_duplicate(int b[] , int n)
{
    int i,j,x,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(x=0;x<i-1;x++)
        {
            if(b[i]==b[x])
            {
                break;
            }
            if(b[x]!=b[i])
            {
                continue;
            }
        }

        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
                {
                    count++;
                }

        }



    }
    if(count==0)
    {
        printf("0 duplicate values in an array ");
    }
    else
    {
        printf("%d duplicate values in an array");
    }

}
