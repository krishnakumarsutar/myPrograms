#include<stdio.h>

void main()
{
    //bubble sort
    int i,x,j,t;
    printf("Enter no. of elements");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
        for(j=i;j<x;j++)
        {
            if(a[j]>a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;

            }
        }
    }
    for(i=0;i<x;i++)
        printf(" %d",a[i]);

    //INSERTION SORT
    int q;
    printf("Enter no. of elements");
    scanf("%d",&q);
    int b[q];
    for(i=0;i<q;i++)
        scanf("%d",&b[i]);
    for(i=1;i<q;++i)
    {
        for(j=i;j>0;--j)
        {
            if(b[j]<b[j-1])
            {
                t=b[j];
                b[j]=b[j-1];
                b[j-1]=t;
            }
            //else
              //  break;
        }
    }
    for(i=0;i<q;i++)
        printf(" %d",b[i]);


}
