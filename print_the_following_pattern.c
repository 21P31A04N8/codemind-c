#include<stdio.h>
int main()
{
    int i,j,n,l,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%d",j);
        }
        for(l=1;l<=i-1;l++)
        {
            printf("%d",l);
        }
        printf("
");
    }
}