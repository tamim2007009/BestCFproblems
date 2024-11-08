#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--) {
        int w, h, n;
        cin >> w >> h >> n;
        
        long long l = 0;
        long long high = 1e18; // The upper bound for the side of the square
        long long ans = high;
        
        while (l <= high) {
            long long mid = l + (high - l) / 2;
            
            // Calculate how many rectangles fit in a square of side 'mid'
            long long x = mid / w;
            long long y = mid / h;
            long long target;
            
            // Check for overflow and safely calculate the number of rectangles that fit
            if (x > 1e9 || y > 1e9) {
                target = 1e18; // We assume overflow, and thus assume it can fit all rectangles
            } else {
                target = x * y; // Safe calculation without overflow
            }
            
            // If the square of side 'mid' can fit at least 'n' rectangles
            if (target >= n) {
                ans = mid;  // Update answer
                high = mid - 1; // Try to minimize by searching left
            } else {
                l = mid + 1; // Not enough rectangles fit, so try larger squares
            }
        }
        
        cout << ans << endl; // Print the minimum side length of the square
    }
    
    return 0;
}
