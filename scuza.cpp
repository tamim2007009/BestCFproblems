#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Step 1: Create prefix sum array
        vector<long long> pre(n);
        pre[0] = a[0];
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + a[i];
        }

        // Step 2: Create the b array for maximum heights up to each index
        vector<int> b(n);
        b[0] = a[0];
        for (int i = 1; i < n; i++) {
            b[i] = max(b[i - 1], a[i]);
        }

        // Step 3: Process each query
        while (q--) {
            int k;
            cin >> k;

            // Find the largest index where b[index] <= k
            int index = upper_bound(b.begin(), b.end(), k) - b.begin();

            // If no valid index, answer is 0
            if (index == 0) {
                cout << 0 << " ";
            } else {
                cout << pre[index - 1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


// https://codeforces.com/contest/1742/problem/E