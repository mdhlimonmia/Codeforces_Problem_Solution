#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v1(n);
    map<int,int>m;
    int arr[3] = {1,2,3};
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
        m[v1[i]]++;
    }
    auto b = *m.begin(), e = *m.rbegin();
    if(m.size()==n || m.size()==n-1 || n<2 || m.size()==1)cout<<-1<<endl;
    else if(m.size()==2 && (b.second == 1 || e.second==1))cout<<-1<<endl;
    else{
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if(m[v1[i]]>1 && k<3){
                cout<<arr[k]<<" ";
                k++;
                m[v1[i]] = -1;
            }
            else cout<<1<<" ";
        }
    
        cout<<endl;
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