#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,j,i,m,n,primeCount=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0) {
                count++;
                break;
            }
        }
        if(count==0 && i!=1) primeCount++;
    }
    printf("%d",primeCount);
}