#include<stdio.h>
int main()
{
    int n,i,a,b,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}
/***
 n=int(input())
arr=list(map(int,input().split()))
a,b=map(int,input().split())
sum=0
for i in range(len(arr)):
    if(arr[i]<a and arr[i]>b or (arr[i]==a or arr[i]==b)):
        sum+=arr[i]
print(sum)
***/