#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m;cin>>n>>m;
    priority_queue<int>pq1;
    priority_queue<int,vector<int>,greater<int>>pq2;
    int x;
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        pq2.push(x);
        pq1.push(x);
    }
    lli mx = 0, mn = 0;
    for (int i = 0; i < n; i++)
    {
        int x = pq1.top(), y = pq2.top();
        pq1.pop(); pq2.pop();
        mx+=x--;
        mn+=y--;
        if(x!=0)pq1.push(x);
        if(y!=0)pq2.push(y);
    }
    cout<<mx<<" "<<mn<<endl;

}

int main()
{
    Limon();
    
    solve();
     
}