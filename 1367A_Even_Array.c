#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n], even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1 && arr[i] % 2 == 0)
            {
                even++;
            }
            else if (i % 2 == 0 && arr[i] % 2 == 1)
            {
                odd++;
            }
        }
        if (even != odd)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", even); // you can also print odd because event == odd
        }
    }
    return 0;
}