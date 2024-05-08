#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n+1), ans(n+1);
    for(int i = 1; i<= n; i++)cin>>v[i];
    for(int i = 2; i<=n; i++){
        for(int j = i-1; j>=0; j--){
            if(v[i]>v[j]){
                ans[i] = j;
                break;
            }
        }
    }
    for(int i = 1; i<=n; i++)cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    Limon();

    solve();    
}