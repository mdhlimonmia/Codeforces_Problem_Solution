#include <bits/stdc++.h>
using namespace std;

int findIndex(const std::vector<int> &vec, int target)
{
    auto it = std::find(vec.begin(), vec.end(), target);

    if (it != vec.end())
    {
        return std::distance(vec.begin(), it);
    }
    else
    {
        return -1;
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
        vector<long long int> m1, m2;
        while (n--)
        {
            int m, x, min1 = 1000000000, min2=1000000000;
            cin >> m;
            for (int i = 0; i < m; i++)
            {
                cin >> x;
                if (min1 > x)
                {
                    min2 = min1;
                    min1 = x;
                }
                else if(min2>x)min2 = x;
            }
                // cout<<min1<<" "<<min2<<endl;
            m1.push_back(min1);
            m2.push_back(min2);
        }

        // for(auto u:m1 )cout<<u<<" ";
        // cout<<endl;
        // for(auto u:m2 )cout<<u<<" ";
        // cout<<endl;

        long long int minimum = *min_element(m1.begin(), m1.end());
        long long int sum = 0;
        sort(m2.begin(), m2.end());
        for (int i = 1; i < m2.size(); i++){
            sum += m2[i];
        }
        sum = sum  + minimum;

        cout << sum << endl;
        m2.clear(); m1.clear();
    }
}