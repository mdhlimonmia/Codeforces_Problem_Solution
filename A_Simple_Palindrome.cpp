#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long
string s = "aeiou";
void solve(){
    ll n;
    cin>>n;
    if(n<=5)for(int i = 0; i<n; i++)cout<<s[i];
    else{
        ll k = n/5, l = n%5;
        for(int i = 0; i<5; i++){
            ll t = k;
            if(l>0){
                t++;
                l--;
            }
            while (t--)
            {
                cout<<s[i];
                n--;
                if(n<1)break;
            }
        }
        while (n>0)
        {
            cout<<"u";
            n--;
        }
        
    }
    cout<<endl;
}
int main() {
    Limon();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}