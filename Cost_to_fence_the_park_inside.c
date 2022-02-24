#include<stdio.h>
int main()
{
    int a,b,c,d,flag=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<c||c<=0)
    {
        printf("Impossible");
    }
    else
    {
        int ar1=a*b;
        int ar2=(a-(c+c))*(b-(c+c));
        if(ar2<=0)
        {
            printf("Impossible");
            flag=1;
        }
        if(flag==0) printf("%d",(ar1-ar2)*d);
    }
}