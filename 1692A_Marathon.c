#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d, result = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a<b)
            result++;
        if(a<c)
            result++;
        if(a<d)
            result++;
        printf("%d\n", result);
    }
    return 0;
}