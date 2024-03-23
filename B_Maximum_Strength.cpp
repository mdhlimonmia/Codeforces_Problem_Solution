#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    // time_t time;
    string x,y; cin>>x>>y;
    int l1,l2;
    l1 = x.size(), l2 = y.size();
    if(x==y){
        cout<<"0\n";
        return;
    }
    if(l1<l2){
        reverse(x.begin(), x.end());
        for(int i = 0; i<l2-l1; i++) x+='0';
        reverse(x.begin(), x.end());
    }
    lli sum = 0,i;
    for (i = 0; i < l2; i++)
    {
        if(x[i]!=y[i]){
            sum = abs((x[i]-'0') - (y[i] - '0'));
            // cout<<sum<<endl;
            break;
        }
    }

    sum += 9*(l2-i-1);
    cout<<sum<<endl;
    // cout<<ctime(&time)<<endl;
    // cout<<x<<endl<<y<<endl;
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