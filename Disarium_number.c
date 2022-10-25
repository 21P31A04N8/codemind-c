#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,rev=0,s,sum=0,j=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        k=n%10;
        rev=rev*10+k;
        n=n/10;
    }
    while(rev)
    {
        s=rev%10;
        sum=sum+(pow(s,j));
        rev=rev/10;
        j+=1;
    }
    if(sum==temp) printf("True");
    else printf("False");
}