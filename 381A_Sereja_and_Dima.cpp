#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max, ind, a = 0, b = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 0, y=n-1;
    for (int i = 0; i <ceil(n/2.0); i++)
    {  
        if (arr[x] >= arr[y])
        {
            a += arr[x];
            arr[x]=0;
            x++;
        }
        else
        {
            a += arr[y];
            arr[y]=0;
            y--;
            
        }
        if (arr[x] > arr[y])
        {
            b += arr[x];
            arr[x]=0;
            x++;
        }
        else
        {
            b += arr[y];
            arr[y]=0;
            y--;
            
        }

    }
    cout << a << " " << b;
}