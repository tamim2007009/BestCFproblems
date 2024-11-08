#include <bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 int t=1;
 //cin >> t;
 while(t--) {
    // Your code here
    int w,h,n;
    cin>>w>>h>>n;
    long long l=0;
    long long  high=1e18;
    long long ans=high;
    while(l<=high) {

    long long mid=l+(high-l)/2;

     //long long terget=(mid/w)*(mid/h);
     //overflow occuring here

      long long x=(mid/w);
      long long y=(mid/h);
      long long terget;
      if(x<=1e9 && y<=1e9){
        terget=x*y;
        }
        else{
            terget=1e18;  //if overflow occurs, take the maximum possible value. 1e18 is the maximum possible value for long long. 1e9 is a safe limit. 1e18/1e9=20.000000000000004, so we take 1e18 as upper limit. 1e18/1e9=20, so we take 20 as upper limit. 20 is safe limit for long long. 20*1e9=2e10, so we take 2e10 as upper limit. But we can't take 2e10 as upper limit, because it's too large. So we take 1e18 as upper limit. 1e18/1e9=20.0000000000000
        }

     if(terget>=n){
        ans=mid;
        high=mid-1;
     }
     else{
        l=mid+1;
     }

    }
    cout<<ans<<endl;
 }
    return 0;
}