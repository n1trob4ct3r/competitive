#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q; cin >> n >> q;
    set<int> S;
    int ans[n+1] = {};
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        S.insert(x);
        ans[i] = S.size();
    }

    while (q--) {
        int l, r; cin >> l >> r;
        printf("%d\n", ans[r] - ans[l-1]);
    }
}
