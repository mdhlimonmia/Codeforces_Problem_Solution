#include <bits/stdc++.h>
using namespace std;
// #define Limon() iso_base
int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        string arr;
        cin >> arr;
        int sz = arr.size();
        if (arr[0] == ')' || arr[sz - 1] == '(' || sz % 2 != 0)
        {
            puts("YES");
            for (int i = 0; i < sz; i++)
            {
                cout << "()";
            }
            cout<<endl;
        }
        else
        {
            int f = 1;
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] == ')')
                    f--;
                else
                    f++;
            }
            if (f == 0)
                puts("NO");
            else
            {
                puts("YES");
                for (int i = 0; i < sz; i++)
                {
                    cout << "()";
                }
                cout<<endl;
            }
        }
    }
}