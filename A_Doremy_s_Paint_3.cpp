#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
void solve(){
    int n;cin>>n;
    map<int,int>m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        m[x]++;
    }

    if(n<3)cy;
    else if(m.size()==1) cy;
    else{
        int lz = m.size();
        if(lz>=3)cn;
        else{
            int arr[2],i =0;
            for(auto u:m){
                arr[i] = u.second;
                i++;
                // cout<<u.second<<endl;
            }
            int t = abs(arr[0] - arr[1]);
            if((t == 1 && n%2 !=0) || t == 0)cy;
            else cn;
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