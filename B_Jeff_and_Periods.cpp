#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


int main() {
    // Limon();
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i = 1; i<=n; i++)cin>>v[i];
    map<int,int>m;
    map<int,int>ans;
    for(int i= 1; i<=n; i++){
        if(m[v[i]] == -1)continue;
        if(m[v[i]]==0){
            m[v[i]] = i;
            ans[v[i]] = 0;
        }else{
            if(ans[v[i]] == 0){
                int x = m[v[i]];
                ans[v[i]] = i-x;
                m[v[i]] = i;
            }else{
                int x = i - m[v[i]];
                if(ans[v[i]]!=x){
                    ans.erase(v[i]);
                    m[v[i]] = -1;
                }else{
                    m[v[i]] = i;
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto [u,v]:ans){
        cout<<u<<" "<<v<<endl;
    }

}