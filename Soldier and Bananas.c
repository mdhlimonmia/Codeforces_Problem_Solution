#include <stdio.h>

int main() 
{
    int k,n,w,buy=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++)
    {
        buy=buy+k*i;
    }
    if(buy<=n)
    {
        printf("0");
    }
    else
    {
        printf("%d",(buy-n));
    }
    return 0;
}