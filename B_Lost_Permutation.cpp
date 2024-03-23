#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,s;cin>>n>>s;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k = 0;
    for(int i = 0; i<n && s>=0; i++){
        k++;
        if(v[i] != k){
            // cout<<v[i]<<" "<<k<<endl;
            int x = v[i];
            while(x!=k && s>=0){
                x--;
                s -= x;
            }
            k = v[i];
        }
    }
    // cout<<s<<endl;
    if(s == 0) cout<<"YES\n";
    else if(s<0) cout<<"NO\n";
    else{
        int x = v[n-1]+1;
        while(s>0){
            // cout<<s<<" "<<x<<endl;
            s -= x;
            x++;
        }
        if(s == 0)cout<<"YES\n";
        else cout<<"NO\n";
    }

}

int main()
{
    Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}