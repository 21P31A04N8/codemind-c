#include<stdio.h>
int main()
{
    int n,pro=1,sum=0,r,i,res;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pro=pro*r;
        sum=sum+r;
        n=n/10;
    }
    res=pro-sum;
    printf("%d",res);
}