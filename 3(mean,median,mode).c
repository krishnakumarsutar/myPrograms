#include<stdio.h>
void main()
{
    int i,j,x,m=0;
    scanf("%d",&x);
    int a[x-1];
    for(i=0;i<x;i++)
    {
        a[i]=rand()%100;
    }
    for(i=0;i<x;i++)
    {
        printf(" %d",a[i]);
    }
    //mean
    for(i=0;i<x;i++)
    {
        m=m+a[i];
    }
    float k=m,l=x;
    printf("\nMEAN = %f\n",k/l);
    //median
    for(i=0;i<x;i++)
    {
        for(j=i;j<x;j++)
        {
            if(a[j]>a[i])
            {m=a[j];
            a[j]=a[i];
            a[i]=m;}
        }
    }
    printf("MEDIAN = %d\n",a[x/2]);
    //mode
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
            {
                if()
                    {
                if(a[i]==a[j])
                    p++;}
                c=p;
            }
    }

}
