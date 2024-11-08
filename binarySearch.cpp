#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    long long l=0;
    long long h=1e18;
    long long ans=h;
    while(l<=h){

      long long mid=l+(h-l)/2;
      long long t_prd=0;
      for(int i=0;i<n;i++){
        t_prd+=mid/a[i];
        if(t_prd>=t){
            break;
        }

      }
     if(t_prd>=t){
        ans=mid;
        h=mid-1;
     }
        else{
        l=mid+1;
      }
      

    }
    cout<<ans<<endl;
    
    return 0;
}
