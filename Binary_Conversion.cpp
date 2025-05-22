#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    //int n;cin>>n;
    lli n,k; cin>>n>>k;
    string s,t; cin>>s>>t;
    lli x1=0,y1=0,x2=0,y2=0, d = 0;
    for(lli i = 0; i<n; i++){
        if(s[i] != t[i]) d++;
    }
    // cout<<x1<<x2<<y1<<y2<<d<<endl;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s != t || d%2 != 0 || d/2 > k) cout<<"NO\n";
    else if(d/2 != k){
        int c = n-d;
        if((k-d/2)%2==0) cout<<"YES\n";
        else{
            if(s[0] == s[1] || s[n-1]== s[n-2])cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    else cout<<"YES\n";
}

int main()
{
    Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
    //    cout<<_<<endl;
     }
}