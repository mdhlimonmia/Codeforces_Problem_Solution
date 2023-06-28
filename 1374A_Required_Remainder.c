#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, n, result;
        scanf("%d %d %d", &x, &y, &n);
        if (n % x == y)
        {
            result = n;
        }
        else if (y == 0)
        {
            result = n - (n%x);
        }
        else
        {
            int mod = n / x;
            if (n % x > y)
            {
                result = n - (n % x) + y;
            }
            else
            {
                result = (mod - 1) * x + y;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}