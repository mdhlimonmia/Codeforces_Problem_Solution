#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
  Limon();
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    n/=2;
    int ans = 1;
    while (n) {
      ans *= 2;
      n/=2;
    }
    cout << ans-1 <<endl;
  }
  return 0;
}
