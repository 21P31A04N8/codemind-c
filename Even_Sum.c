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
        if(arr[i]%2==0)
        {
            ec+=arr[i];
        }
    }
    printf("%d",ec);
}