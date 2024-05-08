#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve() {
    int n;
    cin >> n;
    char arr[4] = {'#','#','.','.'};
    int k = 0;
    for(int i = 1; i<=n; i++){
        if(i%2==0)k=2;
        else k = 0;
        for(int j = 1; j<=(2*n); j++){
            cout<<arr[k++];
            if(k==4)k=0;
        }
        cout<<endl;
        if(i%2==0)k=2;
        else k = 0;
        for(int j = 1; j<=(2*n); j++){
            cout<<arr[k++];
            if(k==4)k=0;
        }
        cout<<endl;
    }
}
 
int main() {
    // Limon();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}