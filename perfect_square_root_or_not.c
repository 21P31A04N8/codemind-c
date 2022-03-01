#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            printf("True");
            break;
        }
        else if(i*i>n)
        {
            printf("False");
            break;
        }
    }
}