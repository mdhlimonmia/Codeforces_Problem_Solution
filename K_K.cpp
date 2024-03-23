#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int solved(string _){
    int x,y,z;
    x = _[0] - '0';
    y = _[1]  - '0';
    z = _[2]  - '0';
    if(x*y == z)return stoi(_);
    else{
        // int ans = (x*100+y*10+x*y);
        // if(ans<stoi(_))
        int k = stoi(_);
        k++;
        string t = to_string(k);
        return solved(t);
    }
}

int main()
{
    Limon();

     string _;cin>>_;
    int ans = solved(_);
    cout<<ans<<endl;

}