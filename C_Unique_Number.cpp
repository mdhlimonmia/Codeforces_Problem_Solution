#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s;
    if(n>45)cout<<-1<<endl;
    else if(n<10)cout<<n<<endl;
    else{
        for (int i = 9; n>i; i--)
        {
            n-=i;
            s+=to_string(i);
        }
        s+=to_string(n);
        reverse(s.begin(),s.end());
        cout<<s<<endl;
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