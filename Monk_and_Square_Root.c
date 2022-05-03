#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        long i,m,n,flag=0;
        scanf("%ld %ld",&n,&m);
        for(i=0;i<=1000000;i++)
        {
            if((i*i)%m==n) 
            {
                printf("%ld
",i);
                flag++;
                break;
            }
        }
        if(flag==0) printf("-1
");
    }
}