#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();

    int n; cin>>n;
    int arr[n], l = 0, maxl = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] > arr[i-1] && i != 0){
            l++;
        }
        else{
            if(l >= maxl){
                maxl = (l + 1);
            }
            l = 0;
        }
    }
    if(l >= maxl) maxl = l+1;
    cout<<maxl<<endl;
}