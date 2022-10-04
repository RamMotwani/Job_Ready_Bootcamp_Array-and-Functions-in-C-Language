#include<stdio.h>
int main()
{
int a[5]={7,5,4,2,1};
int b[5]={8,5,3,2,2};
merge_descending(a,b);


}
merge_descending(int x[],int y[])
{
    int c[10]={0};
    int i=0,j=0,s;
    for(s=0;s<10;s++)
    {
        if(j==5)
        {
            while(s!=10)
            {
                c[s]=x[i];
                x++;
                s++;
            }
        }
        if(i==5)
        {
            while(s!=10)
            {
                c[s]=y[j];
                y++;
                s++;

            }
            if(s==10)
            {
                break;
            }
        }

        if(x[i]>y[j])
        {
            c[s]=x[i];
            i++;
        }
        else
        {
            c[s]=y[j];
            j++;
        }

    }




    for(i=0;i<10;i++)
    {

        printf("%d",c[i]);
    }








}
