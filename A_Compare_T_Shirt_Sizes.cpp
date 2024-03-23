#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string p,q; cin>>p>>q;
    int ps = p.size();
    int qs = q.size();
    if(p[ps-1]==q[qs-1]){
        if(qs==ps)cout<<"=\n";
        else if(p[ps-1]=='L' && ps>qs)cout<<">\n";
        else if(p[ps-1] == 'S' && ps<qs)cout<<">\n";
        else cout<<"<\n";
    }else{
        if(p[ps-1]=='L' || q[qs-1]=='S')cout<<">\n";
        else if(q[qs-1] == 'L' || p[ps-1] == 'S')cout<<"<\n";
        else cout<<">\n";
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