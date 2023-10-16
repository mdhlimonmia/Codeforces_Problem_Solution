#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin>>v[i];
    if(v[0] == v[n-1]){
        int t=2;
        for(int i = 1 ; i<n-1; i++)
        {
            if(v[i]== v[0]){
                t++;
            }
        }
        if(t>=k)cy;
        else cn;
    }
    else{
        int e=0,f=0, ei,fi;
    for (int i = 0; i < n; i++)
    {
        if(f==k)break;
        if(v[0]==v[i]){
            f++;
            fi = i;
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        if(e==k)break;
        if(v[n-1] == v[i]){
            e++;
            ei=i;
        }
    }
    if(e==k && f==k && fi<ei)cy;
    else cn;
  
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