#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int arr1[50], arr2[50], n, min1 = 1000000000, min2 = 1000000000;
        long long int count = 0;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%ld", &arr1[i]);
            if (min1 > arr1[i])
            {
                min1 = arr1[i];
            }

        }
        for (int i = 0; i < n; i++)
        {
            scanf("%ld", &arr2[i]);
            if (min2 > arr2[i])
            {
                min2 = arr2[i];
            }

        }
        for (int i = 0; i < n; i++)
        {
            long int move1 = arr1[i] - min1;
            long int move2 = arr2[i] - min2;
            long int commonMove = (move1 < move2) ? move1 : move2;

            count += (move1 + move2 - commonMove);
        }

        printf("%lld\n", count);
    }
}