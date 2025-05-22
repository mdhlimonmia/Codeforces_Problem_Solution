#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m,k;cin>>n>>m>>k;
    string v; cin>>v;
    int l = 0,x = 0, c = 0, t = 0;
    for(int i = 0; i<n; i++){
        if(v[i]=='L'){
            if(i-l>=m){
                if(t == 1) k-=x;
                if(c+x>=m || k<0 || (t==1 && c>0)){
                    cout<<"NO\n";
                    return;
                }
            }
            c = 0;
            x = 0;
            l = i;
            t = 0;
        }
        else if(v[i] == 'C'){
            c++;
            if(x+c>=m){
                cout<<"NO\n";
                return;
            }
            c+=x;
            x = 0;
        }
        else if(v[i] == 'W'){
            x++;
            if(x+c>=m){
                if(t==1 && c>0){
                    cout<<"NO\n";
                    return;
                }
                k-=x;
                x = 0;
                c = 0;
                t = 1;
            }
        }
    }
           if(n-l>=m){
                if(t == 1) k-=x;
                if((c>=m && c>0) || k<0 || (t==1 && c>0)){
                    cout<<"NO\n";
                    return;
                }
            }
            if(k<0) cout<<"NO\n";
            else cout<<"YES\n";

}

int main()
{
    // Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}