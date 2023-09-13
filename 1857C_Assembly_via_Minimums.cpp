#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        // Use a vector instead of an array
        vector<int> arr;
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        sort(arr.begin(), arr.end());

        int p = 0;
        vector<int> result;
        for (int i = 0; i < arr.size(); i++)
        {
            int k = 1;
            result.push_back(arr[i]);
            
            // Count repeated elements
            while (i + 1 < arr.size() && arr[i] == arr[i + 1])
            {
                k++;
                i++;
                if(k>n-1)break;
            }
            
            // Check if count is greater than or equal to n - 1
            if (k > n - 1 - p)
            {
                result.push_back(arr[i]);
                p++;
            }
            p++;
        }
        
        // Calculate remaining elements to add
            result.push_back(1000000000);

        // Output the entire result vector
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
