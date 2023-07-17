#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("%d\n", (a*2)*(a*2));
        }
        else if (a > b)
        {
            int x = b * 2;
            if (x > a)
            {
                printf("%d\n", x * x);
            }
            else
            {
                printf("%d\n", a * a);
            }
        }
        else
        {
            int x = a * 2;
            if (x > b)
            {
                printf("%d\n", x * x);
            }
            else
            {
                printf("%d\n", b * b);
            }
        }
    }
    return 0;
}