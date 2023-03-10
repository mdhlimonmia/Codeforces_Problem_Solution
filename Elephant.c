#include <stdio.h>
int main()
{
    int i, x, count=0, b;
    scanf("%d", &x);
    for(i=0; i<=1000; i++)
    {
        count=x/5;
        if(x%5==0)
        {
            printf("%d", count);
            break;
        }
        else
        {
            count=count+1;
            printf("%d", count);
            break;
        }
    }
}
