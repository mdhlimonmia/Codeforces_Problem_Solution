#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mpi map<int,int>
#define mpl map<long long, long long>
#define mem(x,y) memset(x, y, szeof(x))
#define inf 1e18

typedef long long ll;
typedef double dd;
int dx[] = {1,-1,0,0,1,-1,-1,1};
int dy[] = {0,0,1,-1,1,-1,1,-1};

void solve(){
    int n,x;
    cin >> n;
    ll cnt = 0;
    for(int i = 1; i<=n; i++){
        cin>>x;
        while(x%2 == 0)cnt++, x/=2;
    }
    vector<int>a;
    for(int i = 2; i<=n; i+=2){
        int k = 0, t = i;
        while(t%2==0)k++, t/=2;
        a.push_back(k);
    }
    sort(a.rbegin(), a.rend());
    ll ans = 0;
    for(auto u:a){
        if(cnt<n) cnt+=u, ans++;
    }
    if(cnt<n)cout<<"-1\n";
    else cout<<ans<<endl;
}

int main()
{
    Limon();

    int _;cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        solve();
    }
}