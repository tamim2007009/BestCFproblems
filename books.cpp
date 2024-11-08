#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t;
    cin >> n >> t;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
       
    }
  int k=0;
    int sum=0;
    int f=0;
    for (int i = 0; i < n; ++i){

        sum += a[i];
        if(sum<=t){
     
        f++;
        }

      else{
       
        sum=sum-a[k];
        k++;

      }



    }
    cout<<f<<endl;
    return 0;
}
