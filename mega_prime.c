#include<stdio.h>
bool isPrime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0) count++;
    }
    if(count==2) return true;
    else return false;
}
int main()
{
    int count=0,digit=0,n,r;    
    scanf("%d",&n);
    if(isPrime(n))
    {
        while(n!=0)
        {
            r=n%10;
            if(isPrime(r)) count++;
            n=n/10;
            digit++;
        }
        if(count==digit) printf("Mega Prime");
        else printf("Not Mega Prime");
    }
    else printf("Not Mega Prime");
}