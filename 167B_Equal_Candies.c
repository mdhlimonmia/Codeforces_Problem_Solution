#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, arr[50], min = 10000000;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result += arr[i] - min;
        }

        printf("%d\n", result);
    }
}