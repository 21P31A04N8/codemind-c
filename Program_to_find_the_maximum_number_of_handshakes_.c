#include<stdio.h>
int main()
{
    int p,n;
    scanf("%d",&n);
    if(n%2==0) 
    {
        p=(n/2)*(n-1);
        printf("%d",p);
    }
    else 
    {
        p=(n/2)*n;
        printf("%d",p);
    }        
}