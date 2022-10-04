#include<stdio.h>
void rotate(int a[],int size,int n,int d)
{    int x,i;
    while(n)
    {
    if(d==1)
    {
        x=a[9];
        for(i=8;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=x;
    }
     if(d==-1)
    {
        x=a[0];
        for(i=0;i<=8;i++)
        {
            a[i]=a[i+1];
        }
        a[9]=x;
    }
    n--;
    }
}
