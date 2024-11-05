#include <bits/stdc++.h>
using namespace std;
const double PI = 22/7;
double square_area(double side) {
    return side * side;
}

double circle_area(double r) {
    return PI * (r * r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        double r;
        cin >> r;
        double a = square_area(2 * r);  
        double b = circle_area(r);

        double blue = a - b;
        cout << fixed << setprecision(2) << "Case " << i << ": " << blue << '\n';
    }

    return 0;
}
