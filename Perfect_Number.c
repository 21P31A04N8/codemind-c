#include<stdio.h>
int main()
{
    int n,sum=0,i,k;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0) 
        {
            k=i;
            sum=sum+k;
        }
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}