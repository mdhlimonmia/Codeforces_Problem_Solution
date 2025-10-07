#include <iostream>
#include <vector>

const int MAXN = 100005;
int fenwick_tree[MAXN];
int n;

void update(int index, int value) {
    for (; index <= n; index += index & -index) {
        fenwick_tree[index] += value;
    }
}

int query(int index) {
    int sum = 0;
    for (; index > 0; index -= index & -index) {
        sum += fenwick_tree[index];
    }
    return sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> n;

    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }

    for (int i = 0; i < n; ++i) {
        int current_val = p[i];
        
        // Total elements processed so far is i.
        // Elements processed that are less than current_val is query(current_val - 1).
        // Elements processed that are greater than current_val is i - query(current_val - 1).
        int greater_elements = i - query(current_val - 1);
        std::cout << greater_elements << (i == n - 1 ? "" : " ");
        
        // Mark current_val as seen.
        update(current_val, 1);
    }
    std::cout << std::endl;

    return 0;
}
