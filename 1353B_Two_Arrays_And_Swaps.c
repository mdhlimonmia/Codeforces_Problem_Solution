#include <stdio.h>

// sort the array
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i];
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// find the maximum sum between those array
int maximum_sum(int n, int k, int a[], int b[])
{
    int sum = 0;
    // minimum number of a array compare with maximum number of b array
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (a[i] < b[j] && k != 0)
        {
            sum += b[j];
            k--;
        }
        else
        {
            sum += a[i];
        }
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, a[30], b[30], result;
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        sort(a, n);
        sort(b, n);

        result = maximum_sum(n, k, a, b);
        printf("%d\n", result);
    }

    return 0;
}