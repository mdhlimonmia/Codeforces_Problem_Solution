#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bubble_Sort(arr, n);
        int k = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                k++;
                break;
            }
        }
        if (k == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}