#include <bits/stdc++.h>
using namespace std;

#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main() {
    Limon();

    vector<string> opt = {"5", "-2", "4", "C", "D", "9", "+", "+"};

    stack<int> st;

    for (auto u : opt) {
        if (isdigit(u[0])) {
            st.push(u[0] - '0');
        } else if (u[0] == '+') {
            int x = -1, y = -1;
            if (!st.empty()) {
                x = st.top();
                st.pop();
            }
            if (!st.empty()) {
                y = st.top();
                st.pop();
            }
            if (y != -1) {
                st.push(y);
                st.push(x);
                st.push(x + y);
            } else if (x != -1) st.push(x);
        } else if (u[0] == 'D') {
            int x = st.top();
            x *= 2;
            st.push(x);
        } else if (u[0] == 'C') {
            if (!st.empty()) {
                st.pop();
            }
        }
    }

    long long int ans = 0;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;

    return 0;
}
