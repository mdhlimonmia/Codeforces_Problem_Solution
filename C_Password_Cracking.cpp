#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
bool ask(string s){
    cout<<"? "<<s<<endl;
    cout.flush();
    bool ok;
    cin>>ok;
    return ok;
}
void solve(){
    ll n;cin>>n;
    if(n==1){
        if(ask("1"))cout<<"! "<<"1"<<endl;
        else cout<<"! "<<"0"<<endl;
        cout.flush();
    }else{
        string s[] = {"01", "10","00","11"}, t = "";
        for(int i = 0; i<4; i++){
            if(ask(s[i])){
                t = s[i];
                break;
            }
        }
        if(t != "10" && t != "01"){
            for(int i = 0; i<n-2; i++)t+=t[0];
            cout<<"! "<<t<<endl;
            cout.flush();
        }else{
            while ((int)t.size() < n)
            {

                if(ask(t+'0')) t+='0';
                else if(ask(t+'1'))t+='1';
                else break;
            }
            while ((int)t.size()< n)
            {
                string s1 = '0'+t;
                string s2 = '1'+t;
                if(ask(s1))t = s1;
                else t = s2;
            }
            cout<<"! "<<t<<endl;
            cout.flush();
        }

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