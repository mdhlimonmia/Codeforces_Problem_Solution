#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    map<int, int>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    if(m.size()<3)cout<<"-1 -1 -1\n";
    else{
        int k = 0;
        for(auto u:m){
            for (int i = 0; k <=3 ; i++)
            {
                if(arr[i] == u.first){
                    cout<<i+1<<" ";
                    break;
                }
            }
            k++;
            if(k == 3)break;
        }
        cout<<endl;
    }
}