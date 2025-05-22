#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string a,b; cin>>a>>b;
    int l = a.size(), x = 0, y = 0;

    for(int i = 0; i<l; i++){
        if(x==y){
            if(a[i]<b[i]){
                swap(a[i],b[i]);
                x++;
            }else if(a[i]>b[i])x++;
        }
        else if(x>y && a[i]>b[i]){
            swap(a[i],b[i]);
        }
    }
    cout<<a<<endl<<b<<endl;
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