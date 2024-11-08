#include <bits/stdc++.h>
using namespace std;

long long binarySearch(long long n) {
    long long l = 1;
    long long h = n * n;
    long long target = (n * n + 1) / 2;

    while (l < h) {
        long long mid = (l + h) / 2;
        long long count = 0; 

        for (long long i = 1; i <= n; i++) {
          
            count += min(n, mid / i); 
        }

        if (count < target) {
            l = mid+1 ;
        } else {
            h = mid;
        }
    }
    return l;  
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = binarySearch(n);  
        cout << ans << endl;  
    }

    return 0;
}
