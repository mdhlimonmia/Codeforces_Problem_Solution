#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int x = 0, y = 0,c;
    for (int i = 0; i < n; i++)
    {
        cin>>c;
        if(c<0)x++;
        else y++;
    }
    
    if(x<y){
        if(x%2==0)cout<<"0\n";
        else cout<<"1\n";
    }else{
        int t = x-y;
        t = (t+1)/2;
        x-=t;
        if(x%2!=0)t++;
        cout<<t<<endl;
    }


    // if(x%2==0){
    //     if(x<=y)cout<<"0\n";
    //     else{
    //         int t = y-x;
    //         if(t%2 != 0) t++;
    //         cout<<t<<endl;
    //     }
    // }
    // else if(x==y) cout<<1<<endl;
    // else{
    //     if(x<y){
    //         int t = 
    //     }
    // }
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