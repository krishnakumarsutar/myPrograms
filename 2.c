#include<stdio.h>
int p,c=1;
void main()
{
 int x;
 scanf("%d",&x);
 fibbo(x);
}
void fibbo(int a)
{
    int i,q,m=0,n=1;
    printf("%d %d",m,n);
    for(i=0;i<a-2;i++)
    {
        q=m+n;
        printf(" %d",q);
        m=n;
        n=q;

    }
    printf("\n");
    if(a-1>1)
    {fibbo(a-1);
    c++;}
    printf(" %d",c);
    //printf("\n");
    //if(a-2!=0 || a-2!=1)
    //fibbo(a-2);
}
