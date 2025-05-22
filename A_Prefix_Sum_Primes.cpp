#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
}

int main()
{
    Limon();
    
    int n; cin>>n;
    vector<int>v(n);
    int x = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i]==2)x++;
    }
    if(x!=0){
        cout<<"2 ";
        if((n-x)%2==0){
            for(int i = 1; i<(n-x); i++)cout<<"1 ";
            for(int i = 2; i<=x; i++)cout<<"2 ";
            if(x!=n)cout<<"1";
        }else{
            for(int i = 1; i<=(n-x); i++)cout<<"1 ";
            for(int i = 2; i<=x; i++)cout<<"2 ";
        }
    }else for(auto u:v)cout<<u<<" ";
    cout<<endl;
}