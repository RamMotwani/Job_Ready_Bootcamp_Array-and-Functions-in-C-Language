#include<stdio.h>
void read_reverse(int b[],int n)
{
    int i;
    printf("enter an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }

}
