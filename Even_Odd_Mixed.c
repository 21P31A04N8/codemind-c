#include<stdio.h>
int main()
{
    int n,r,odd=0,even=0,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0) even++;
        else odd++;
        count++;
        n=n/10;
    }
    if(even==count) printf("Even");
    else if(odd==count) printf("Odd");
    else printf("Mixed");
}