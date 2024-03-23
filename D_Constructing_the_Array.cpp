#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
    q.push({1,n});
    int l, r, k, arr[n+1];
    for (int i = 1; !q.empty(); i++)
    {
        l = q.top().first;
        r = q.top().second;
        q.pop();
        k = r-l;
        if(k%2 == 0){
            int ind = (l+r-1)/2;
            arr[ind] = i;
            if(ind != l) q.push({l,ind-1});
            if(ind != r)q.push({ind+1,r});
        }else{
            int ind = (l+r)/2;
            arr[ind] = i;
            if(ind != l) q.push({l,ind-1});
            if(ind != r)q.push({ind+1,r});
        }
    }
    for(int i = 1; i<=n; i++)cout<<arr[i]<<" ";
    cout<<endl;
    
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