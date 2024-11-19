## Problem Link: https://codeforces.com/contest/1354/problem/B
```
#include <bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 int t;
 cin >> t;
 while(t--) {
    // Your code here
   
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int> fre;
    int ssub=INT_MAX;
    int f=0;
    int l=0;

    for(int r=0;r<n;r++){
       fre[s[r]]++;
    
       while(fre['1'] >0 && fre['2']>0 && fre['3']>0 ){
              ssub=min(ssub,r-l+1);
              fre[s[l]]--;
                l++;
                f=1;
    

       }

    }

 if(f==0){
    cout<<0<<endl;
 }
 else{
    cout<<ssub<<endl;

 }
 }
    return 0;
}

```
