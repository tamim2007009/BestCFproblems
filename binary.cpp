#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<long long>& a, long long x, long long n) {
    
        int l=0;
        int h=n-1;
        int ans=n;
        
        while(l<=h) {
            int mid=(l+h)/2;

               if(a[mid]>=x) {
                 ans=mid;
                 h=mid-1;
            }
           else {
                 l=mid+1;
            }



        }
        return ans;


}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    long long n, k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (k--) {
        long long x;
        cin >> x;

         int ans=binarySearch(a,x,n);
         cout << ans+1 << endl;
    }

    return 0;
}
