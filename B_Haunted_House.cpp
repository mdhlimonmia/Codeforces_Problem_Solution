#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,ans = 0;cin>>n;
    string s; cin>>s;
    if(n == 1){
        if(s[0] == '0')cout<<0;
        else cout<<-1;
        cout<<endl;
        return;
    }
    
    lli z = 0, on=0;
    vector<lli> zero;
    for (lli i = 0; i < n; i++)
    {
        if(s[i] == '0'){
            z++;
            zero.push_back(n-i-1);
        }
        else on++;
    }
    if(z == 0){
        for (lli i = 0; i < n; i++)
        {
            cout<<-1<<" ";
        }
        cout<<endl;
    }else{
        lli ans = zero[z-1], f = zero[z-1], pos, lo = zero[z-1];
        cout<<zero[z-1]<<" ";
        for (lli i = z-2; i>=0; i--)
        {
            lli temp = f + (zero[i] - zero[i+1] - 1);
            // cout<<"temp "<<temp<<" f "<<f<<endl;
            cout<<temp+ans<<" ";
            f = (ans+temp)-ans;
            lo = zero[i];
            ans+=temp;
        }
        for (lli i = 0; i < n-z; i++)
        {
            cout<<-1<<" ";
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