#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli k, n;cin>>n>>k;
    string s; cin>>s;
    lli p = n-k;
    if(p==1)cy;
    else if(p == 2){
        sort(s.begin(),s.end());
        for (lli i = 1; i < n; i++)
        {
            if(s[i] == s[i-1]){
                cy;
                return;
            }
        }
        cn;
        
    }
    else if(n%2 !=0 && k%2 !=0){
        lli a = 1,temp = 0, tod = 0;
        sort(s.begin(),s.end());
        for (lli i = 1; i < n; i++)
        {
            if(s[i]==s[i-1]){
                a++;
            }
            else{
                if(a%2 != 0){
                    temp++;
                    tod += a/2;
                }
                else tod+=a;
                a = 1;
            }
        }
        if(temp <= k && tod>=p && temp !=0)cy;
        else cn;
    }else if(n%2 !=0 && k%2 ==0)  {
        lli a = 1, temp = 0, tod = 0;
        sort(s.begin(),s.end());
        for (lli i = 0; i < n; i++)
        {
            if(s[i] == s[i-1])a++;
            else{
                if(a%2 !=0){
                   tod += a/2;
                   temp++;
                }
                else{
                    tod += a;
                }
                a = 1;
            }
        }
        if(tod >= p-1 && temp-1 <= k && temp%2 != 0)cy;
        else cn;
    }
    else if(n%2 == 0 && k%2 !=0)  {
        lli a = 1, temp = 0, tod = 0;
        sort(s.begin(),s.end());
        for (lli i = 0; i < n; i++)
        {
            if(s[i] == s[i-1])a++;
            else{
                if(a%2 !=0){
                   tod += a/2;
                   temp++;
                }
                else{
                    tod += a;
                }
                a = 1;
            }
        }
        if(tod >= p-1 && temp-1 <= k && temp%2 != 0)cy;
        else cn;
    }
    else if(n%2 ==0 && k%2 == 0){
        lli a = 1, temp = 0, tod = 0;
        sort(s.begin(),s.end());
        for (lli i = 0; i < n; i++)
        {
            if(s[i] == s[i-1])a++;
            else{
                if(a%2 !=0){
                   tod += a/2;
                   temp++;
                }
                else{
                    tod += a;
                }
                a = 1;
            }
        }
        if(tod >= p && temp <= k && temp%2 == 0)cy;
        else cn;
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