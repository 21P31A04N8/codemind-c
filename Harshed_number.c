#include<stdio.h>
int main()
{
    int n,k,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        k=n%10;
        sum=sum+k;
        n=n/10;
    }
    n=temp;
    if(n%sum==0) printf("True");
    else printf("False");
}