#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,sum;
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}