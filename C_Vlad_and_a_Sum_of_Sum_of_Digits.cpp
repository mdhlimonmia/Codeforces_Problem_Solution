#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define mx  2e5+123

vector<lli>cnt(mx);

lli sum_digit(lli x){
    lli sum = 0;
    while(x){
        sum+=(x%10);
        x/=10;
    }
    return sum;
}

void preCal(){
    lli sum = 0;
    for (int i = 1; i < mx; i++)
    {
        sum += sum_digit(i);
        cnt[i] = sum;
    }
    
}

void solve(){
    int n;cin>>n;
    cout<<cnt[n]<<endl;
}

int main()
{
    Limon();
    preCal();
     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}


// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define Limon()                   \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define lli long long int
// using namespace std;

// lli finddg(int dg, int n)
// {
//     lli ct = 0;
//     lli fc = 1;
//     int qut, rm;
//     int k = log10(n) + 1;

//     for (int i = 1; i <= k; ++i)
//     {
//         qut = n / (fc * 10);
//         rm = n % (fc * 10);

//         ct += qut * fc;

//         if (rm >= dg * fc)
//             ct += min(rm - dg * fc + 1, fc);

//         if (dg == 0)
//             ct -= fc; // Adjust for leading zeros

//         fc *= 10;
//     }

//     return ct;
// }

// void solve()
// {
//     lli n;
//     cin >> n;
//     lli ans = 0;
//     for (int i = 1; i <= 9; ++i)
//     {
//         int t = finddg(i, n);
//         ans += (t * i);
//     }
//     cout << ans << endl;
// }
// int main()
// {
//     Limon();

//     int _;
//     cin >> _;
//     while (_--)
//     {
//         solve();
//     }
//     return 0;
// }
