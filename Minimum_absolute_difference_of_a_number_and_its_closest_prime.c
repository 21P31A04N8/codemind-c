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
    int mindiff,maxdiff,i,n,j,count=0;
    scanf("%d",&n);
    if(isPrime(n)) printf("0");
    else 
    {
        for(j=n-1;;j--)
        {
            if(isPrime(j))
            {
                mindiff=n-j;
                break;
            }
        }
        for(j=n+1;;j++)
        {
           if(isPrime(j))
            {
                maxdiff=j-n;
                break;
            }
        }
    if(mindiff<maxdiff) printf("%d",mindiff);
    else printf("%d",maxdiff);
    }
}