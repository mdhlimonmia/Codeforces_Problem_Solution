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
#define inf 1e18

typedef long long ll;
typedef double dd;
int dx[] = {1,-1,0,0,1,-1,-1,1};
int dy[] = {0,0,1,-1,1,-1,1,-1};

void solve(){
    ll n,x;cin>>n;
    ll a,b; a = b = 0;
    for(int i = 1; i<=n; i++){
        cin>>x;
        ll t = 0;
        if((i % 2 && n%2) || (i % 2==0 && n%2==0)){
            t = x + (n+1)/2;
        }else t = x + (n)/2;
        a = max(a,t);
    }
    n++;
    cout<<a<<endl;
}

int main()
{
    Limon();

    int _;cin>>_;
    for(int i = 1; i<=_; i++)
    {
        solve();
    }
}