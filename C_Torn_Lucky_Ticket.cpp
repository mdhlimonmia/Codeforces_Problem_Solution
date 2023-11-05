#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

bool eql(string s, int n){
    lli x = 0,y = 0;
    for (lli i = 0; i < n/2; i++)
    {
        x+=s[i]-'0';
    }
    for (lli i = n/2; i < n; i++)
    {
        y+=s[i]-'0';
    }
    return (x==y);
}

void solve(){
    lli n;cin>>n;
    string s[n],x,y;
    for (lli i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    lli ans = 0;
    for (lli i = 0; i < n; i++)
    {
        for (lli j = i+1; j < n; j++)
        {
            x = s[i]+s[j];
            y = s[j]+s[i];
            lli sz = x.size();
            if(sz%2==0){
                if(eql(x,sz))ans++;
                if(eql(y,sz))ans++;

            }
        } 
    }
    cout<<ans+n<<endl;
    
    

}

int main()
{
    Limon();

    
       solve();
     
}