#include <bits/stdc++.h>
using namespace std;

int fac(int n){
    // cout<<"n = ";
    int ans = 1;
    while(n--)ans*=(n+1);
    // cout<<ans<<endl;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, k;
        cin >> a >> k;
        if(k>a){
        cout << "Case " << i << ": " << 0 << endl;
            return 0;
        }
        int ans = k * (fac(a)/(fac(a-k)));

        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}
