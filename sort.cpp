#include<bits/stdc++.h>
using namespace std;

void RadixSort_a(int arr[], int n);
void RadixSort_d(int arr[], int n);
void CounterSort_a(int arr[], int n);
void CounterSort_d(int arr[], int n);
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // RadixSort_a(arr, n);
    // RadixSort_d(arr, n);
    // CounterSort_a(arr,n);
    CounterSort_d(arr, n);

    cout<<"output: \n";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}

void RadixSort_a(int arr[], int n)
{
    int mx = *max_element(arr, arr + n);
    double div = 0.1;
    while(mx)
    {
        vector<queue<int>> q(10);
        div *= 10;
        for(int j=0; j<n; j++)
        {
            int value = arr[j];
            value /=div;
            int p = value%10;
            q[p].push(arr[j]);
        }
        int x = 0;
        for(auto u: q)
        {
            while(!u.empty())
            {
                int value = u.front();
                u.pop();
                arr[x++] = value;
            }
        }
        mx/=10;
    }
}
void RadixSort_d(int arr[], int n)
{
    int mx = *max_element(arr, arr + n);
    double div = 0.1;
    while(mx)
    {
        vector<stack<int>> q(10);
        div *= 10;
        for(int j=0; j<n; j++)
        {
            int value = arr[j];
            value /=div;
            int p = value%10;
            q[p].push(arr[j]);
        }
        int x = n-1;
        for(auto u: q)
        {
            while(!u.empty())
            {
                int value = u.top();
                u.pop();
                arr[x--] = value;
            }
        }
        mx/=10;
    }
}

void CounterSort_a(int arr[], int n) {
    int mx = *max_element(arr, arr + n);
    vector<int> cnt(mx + 1);

    for (int i = 0; i < n; i++)
        cnt[arr[i]]++;

    for (int i = 1; i <= mx; i++) 
        cnt[i] += cnt[i - 1];

    vector<int> tem(n);
    for (int i = n - 1; i >= 0; i--) {
        cnt[arr[i]]--;
        tem[cnt[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
        arr[i] = tem[i];
}

void CounterSort_d(int arr[], int n) {
    int mx = *max_element(arr, arr + n);
    vector<int> cnt(mx + 1);

    for (int i = 0; i < n; i++)
        cnt[arr[i]]++;

    for (int i = mx - 1; i >= 0; i--) 
        cnt[i] += cnt[i + 1]; 

    vector<int> tem(n);
    for (int i = 0; i < n; i++) {
        tem[--cnt[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
        arr[i] = tem[i];
}