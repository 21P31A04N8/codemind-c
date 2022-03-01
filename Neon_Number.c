#include<stdio.h>
int main()
{
    int n,sum=0,k,pro=1;
    scanf("%d",&n);
    pro=n*n;
    while(pro!=0)
    {
        k=pro%10;
        sum=sum+k;
        pro=pro/10;
    }
    if(sum==n) printf("Neon Number");
    else printf("Not Neon Number");
}