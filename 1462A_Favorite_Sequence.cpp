#include <bits/stdc++.h>
using namespace std;

int main()
{
    int _;
    cin >> _;
    while (_--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            cout << arr[i] << " " << arr[j] << " ";
        }
        if (n % 2 != 0)
            cout << arr[n / 2] << endl;
        else
            cout << endl;
    }
}