#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n = v.size();
        // if(n==1)return 0;
        int l = 0, r = n-1, ans;
        while(l<r){
            dbg(l,r);
            int m = (l +r)>>1;
            if(v[m]<v[m+1]) l = m+1;
            else r = m;
        }
        return l;
    }
};

int main() {
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u:v)cin>>u;
    Solution obj;
    cout<<obj.findPeakElement(v)<<endl;
    return 0;
}