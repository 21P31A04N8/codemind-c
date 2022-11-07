#include<stdio.h>
int main()
{
	int arr[100],n,i,e,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(e==arr[i])
		{
			count++;
		}
	}
	printf("%d",count);
}
/***
n=int(input())
lst=list(map(int,input().split()))
x=int(input())
cnt=0
for i in range(0,n):
    if x==i:
        cnt+=1
        print(1)
if cnt==0:
    print(0)
    
***/