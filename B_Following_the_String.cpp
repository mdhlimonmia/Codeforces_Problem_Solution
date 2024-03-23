// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define lli long long int

// char al[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
// void solve(){
//     int n;cin>>n;
//     vector<int>v(n),v1(n);

//     int z = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     v1 = v;
//     sort(v1.begin(),v1.end());
//     pair<int,char>p[n];
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(i != 0 && v1[i] != v1[i-1])k = 0;

//         p[i] = {v1[i], al[k]};
//         k++;
//         // cout<<p[i].first<<" "<<p[i].s
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(p[j].first == v[i] && p[j].second != '1'){
//                 cout<<p[j].second;
//                 p[j].second = '1';
//                 break;
//             }
//         }
        
//     }
//     cout<<endl;
// }

// int main()
// {
//     Limon();

//      int _;cin>>_;
//      while (_--)
//      {
//        solve();
//      }
// }

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    pair<int,char>al[26];
    char c = 'a';
    for (int i = 0; i < 26; i++)
    {
        al[i].first = 0;
        al[i].second = c++;
        // cout<<c<<" ";
    }
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if(al[j].first == v[i]){
                ans+=al[j].second;
                al[j].first = v[i]+1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    
    
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