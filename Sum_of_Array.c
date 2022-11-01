#include<stdio.h>
int main()
{
    int n,i,ec=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ec+=arr[i];
    }
    printf("%d",ec);
}