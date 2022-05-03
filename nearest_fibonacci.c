#include<stdio.h>
int main()
{
    int mindiff,maxdiff,a=0,c,b=1,n;
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n) 
        {
            printf("%d",n);
            break;
        }
        else if(c>n) 
        {
            mindiff=n-a;
            maxdiff=c-n;
            if(mindiff<maxdiff) printf("%d
",a);
            else if(mindiff==maxdiff) printf("%d %d",a,c);
            else printf("%d
",c);
            break;
        }
    }
}