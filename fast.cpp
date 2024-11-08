#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long binarySearch(int w, int h, int n) {
    ll l = 0;
    ll r = 1e18;
    ll ans = r;
    while (l <= r) {
        ll mid = (l + r) / 2;

        if(mid/w >=1e9 || mid/h >=1e9) {
            r = mid - 1;
            ans = mid;
            continue;
        }
          if ((mid / w) * (mid / h) >= 1e18) {
            ans = mid;  // Update the answer
            r = mid - 1;
            continue;  // Try for a smaller size
        }
        // Check if mid can contain n rectangles of size w*h
        if ((mid / w) * (mid / h) >= n) {
            ans = mid;  // Update the answer
            r = mid - 1;  // Try for a smaller size
        }
         else {
            l = mid + 1;  // Try for a larger size
        }
    }
    return ans;  // Return the smallest possible area
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int w, h, n;
    cin >> w >> h >> n;
    long long ans = binarySearch(w, h, n);
    cout << ans << endl;

    return 0;
}
