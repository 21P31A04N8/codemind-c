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
    int k,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int mindiff,maxdiff,i,n,j,count=0,minNear,maxNear;
        scanf("%d",&n);
        if(isPrime(n)) printf("%d
",n);
        else 
        {
            for(j=n-1;;j--)
            {
                if(isPrime(j))
                {
                    mindiff=n-j;
                    minNear=j;
                    break;
                }
            }
            for(j=n+1;;j++)
            {
               if(isPrime(j))
                {
                    maxdiff=j-n;
                    maxNear=j;
                    break;
                }
            }
        if(mindiff<=maxdiff) printf("%d
",minNear);
        else printf("%d
",maxNear);
        }
    }
}