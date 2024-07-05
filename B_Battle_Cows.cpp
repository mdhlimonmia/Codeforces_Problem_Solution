#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli n, k; cin >> n>>k;
    vector<lli>v(n);
    for(lli i = 0; i<n; i++)cin>>v[i];
    lli a = -1, b = 0;
    bool f = true;
    if(k==1){
        for(lli i = 1; i<n; i++){
            if(v[k-1]<v[i])break;
            b++;
        }
        cout<<b<<endl;
        return;
    }

    for (lli i = 0; i < n; i++)
    {
        if(f && v[i]<=v[k-1])a++;
        else if(v[i]<v[k-1])b++;
        else{
            if(f && i<k){
                if(i!=0 && v[i-1]<v[k-1])b++;
                f = false;
                // swap(v[i],v[k-1]);
            }
            else break;
        }

    }
    cout<<max(a,b)<<endl;
}

int main()
{
    Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        solve();
    }
    return 0;
}