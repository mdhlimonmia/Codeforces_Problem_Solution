#include <stdio.h>

// sort the array;
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

//arrange the array for given condition
void mean_inequality(int arr[], int n){
    for(int i=0; i<n; i= i+2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    //exchange first and last number after arrange.
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, arr[50];
        scanf("%d", &n);
        for (int i = 0; i < (2 * n); i++)
        {
            scanf("%d", &arr[i]);
        }

        sort(arr, (2 * n));

        mean_inequality(arr, (2*n));
        for (int i = 0; i < (2 * n); i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
