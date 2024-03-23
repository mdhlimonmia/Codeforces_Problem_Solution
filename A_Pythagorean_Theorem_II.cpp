#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
const lli mx = 2e8 + 123;
bool isPerfactSquar[mx];
148180877
28/1/2000
int main()
{
    Limon();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        isPerfactSquar[i * i] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            lli x = i * i + j * j;
            if (isPerfactSquar[x]){
                ans++;
            }
        }
    }
    cout << ans << endl;
}