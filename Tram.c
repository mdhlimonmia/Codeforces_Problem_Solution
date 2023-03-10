#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n, i, o, sum=0, c=0;
    scanf("%d", &n);
    for(int j=1; j<=n; j++)
    {
        scanf("%d %d", &o, &i);
        sum=sum+i-o;
        if(c<sum)
        {
            c=sum;
        }
    }
    printf("%d", c);
}
