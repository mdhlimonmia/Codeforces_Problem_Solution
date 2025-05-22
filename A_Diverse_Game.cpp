#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    ll n,m;cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    if(n==m && n==1){
        cout<<"-1\n";
        return;
    }
    if(m != 1){
        for(int i = 0; i<n; i++){
            for(int j = (m+1)/2; j<m; j++){
                cout<<arr[i][j]<<" ";
            }
            for(int j = 0; j<(m+1)/2; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        for(int i = (n+1)/2; i<n; i++){
            for(int j = 0; j<m;j++)cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        for(int i = 0; i<(n+1)/2; i++){
            for(int j = 0; j<m;j++)cout<<arr[i][j]<<" ";
            cout<<endl;
        }
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
