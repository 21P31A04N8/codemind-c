#include<stdio.h>
int main()
{
    int n,sum=0,k,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        k=n%10;
        sum=sum+k;
        pro=pro*k;
        n=n/10;
    }
    if(sum==pro) printf("Spy Number");
    else printf("Not Spy Number");
}