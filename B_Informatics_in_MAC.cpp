#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> si;
typedef map<int, int> mii;
typedef pair<int, int> pii;

///**************************** M a r c o ****************************///
#define f first
#define s second
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define fora(a) for(auto u:a)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define forn(i,k,n) for(auto i=k; i<n; i++)
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

///**************************** C o n s t ****************************///
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 900000000000000000;

///************************ Template End Here ************************///

int main()
{
    optimize();
    int _; cin>>_;
    while(_--)
    {
        int n;
        cin>>n;
        vi v(n);
        forn(i,0,n) cin>>v[i];

        set<int> st, st2;
        fora(v) st.insert(u);
        
        //fora(st)cout<<u<<" ";
        //cout<<endl;
        vi v1;

        fora(st) v1.pb(u);
        
        fora(v1) cout<<u<<" ";
        cout<<endl;

        int mx = v1.size();
        forn(i,0,v1.size())
        {
            if(i != v1[i])
            {
                mx = i;
                break;
            }
        }

        vector<pii> vt;
        int mx1 = -1;
        int c = 0, l = 1;
        set<int> st1;
        bool done = 1;
        forn(i,0,n)
        {
            if(v[i]<mx)
            {
                st1.insert(v[i]);
            }
            if(st1.size()==mx)
            {
                l = i+1;
                break;
            }
        }
        for(int i=l; i<n; i++) st2.insert(v[i]);
        vi v2;
        fora(st2) v2.pb(u);

        int mx2 = v2.size();
        forn(i,0,v2.size())
        {
            if(v2[i] != i)
            {
                mx2 = i;
                break;
            }
        }
        if(l==n || mx2 != mx) cout<< -1<<endl;
        else
        {
            cout<< 2<<endl;
            cout<< 1 sp l<<endl;
            cout<< l+1 sp n<<endl;
        }
    }

    return 0;
}



