#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();
    
   int _;cin>>_;
   while (_--)
   {
    int n, ans = 0; cin>>n;
    string s;
    cin>>s;
    vector<int>a(26,0), b(26,0);
    for(auto c:s) a[c-'a']++;
    for (auto c:s)
    {
        --a[c-'a'];
        ++b[c-'a'];
        int k = 0;
        for(int i = 0; i<26; i++){
            k += min(1, a[i]) + min(1, b[i]);
        }
        ans = max(ans,k);
    }
    cout<<ans<<endl;
   }
}