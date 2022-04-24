#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        long i,l,r,lastDigit,prettyCount=0;
        scanf("%ld %ld",&l,&r);
        for(i=l;i<=r;i++)
        {
            lastDigit=i%10;
            if(lastDigit==2 || lastDigit==3 ||lastDigit==9) prettyCount++;
        }
        printf("%ld
",prettyCount);
    }
}