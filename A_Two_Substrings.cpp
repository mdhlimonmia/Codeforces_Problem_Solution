#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    Limon();

    string s;cin>>s;
    ll l = s.size();
    int ax,ay,bx,by;
    ax = bx = -1, ay = by = l+1;
    for(int i = 0; i<l-1; i++){
        if(s.substr(i,2) == "AB"){
            ax = max(ax,i);
            ay = min(ay,i+1);
        }
        if(s.substr(i,2) == "BA"){
            bx = max(bx,i);
            by = min(by,i+1);
        }
        // cout<<s.substr(i,2)<<endl;
    }
    // cout<<ax<<" "<<ay<<" "<<bx<<" "<<by<<endl;
    if(ax != -1 && bx != -1 && (ay<bx || by<ax)) cout<<"YES\n";
    else cout<<"NO\n";
}