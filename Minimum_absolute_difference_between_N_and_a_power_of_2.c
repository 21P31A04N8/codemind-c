#include<stdio.h>
int main()
{
    int n,pro=1,mindiff,maxdiff;
    scanf("%d",&n);
    while(1)
    {
        pro=pro*2;
        if(n==pro)
        {
            printf("0");
            break;
        }
        else
        {
            if(pro>n)
            {
                mindiff=n-pro/2;
                maxdiff=pro-n;
                if(mindiff<=maxdiff) printf("%d",mindiff);
                else printf("%d",maxdiff);
                break;
            }
        }
    }
}