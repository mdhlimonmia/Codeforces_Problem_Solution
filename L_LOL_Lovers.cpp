#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int L = 0, O = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='L')L++;
        else O++;
    }
    if(O==1 && L == 1)cout<<1<<endl;
    else if(O==2 && s[0]=='O' && s[n-1]=='O')cout<<-1<<endl;
    else if(L==2 && s[0]=='L' && s[n-1]=='L')cout<<-1<<endl;
    else if(O<=2 && L<=2 && n<=4){
        int t = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]==s[i+1]){
                if(i==0)cout<<2<<endl;
                else cout<<i<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    }
    else if(L == 2){
        int t = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]== 'L')L--;
            t++;
            if(L==0){cout<<i+1<<endl; break;}
            if(t==2 && L==2){cout<<1<<endl; break;}
        }
    }
    else if(O == 2){
        int t = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]== 'L')O--;
            t++;
            if(O==0){cout<<i+1<<endl; break;}
            if(t==2 && O==2){cout<<1<<endl; break;}
        }
    }
    else cout<<1<<endl;
    
}

int main()
{
    Limon();

     solve();
}