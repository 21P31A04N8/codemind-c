#include<stdio.h>
int main()
{
    int n,i,a,b,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d ",arr[i]);
        }

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }

    }
}
/***
n=int(input())
arr=list(map(int,input().split()))
z=[]
for i in range(len(arr)):
    if i%2==1:
        z.append(i)
for i in range(1,n):
    if i%2==0:
        z.append(i)
print(z)
***/
