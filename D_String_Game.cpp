#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

const lli mx = 2e6+123;
string s,a;
lli v[mx];
lli n;
bool check(lli m){
    string t = s;
    for(int i = 1; i<=m; i++)t[v[i]-1] = '1'; 
    lli k = a.size(), i, j;
    for(i = 0,j = 0; i<n; i++){
        if(t[i] == a[j]){
            j++;
            if(j==k)return true;
        }
    }
    // cout<<m<<" "<<t<<" "<<j<<" "<<k<<endl;
    return false;
}

void solve(){
    cin>>s>>a;
    n = s.size();
    for(int i = 1; i<=n; i++)cin>>v[i];

    lli l = 0, r = n, ans;
    while (l<=r)
    {
        lli m = (l+r)/2;
        if(check(m)){
            ans = m;
            l = m+1;
        }else r = m-1;
    }
    cout<< ans <<endl;
}

int main()
{
    Limon();
    solve();
    return 0;
}