#include <bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 int t;
 cin >> t;
 while(t--) {
    // Your code here

 int n;
 cin>>n;
 if(n==0){
  cout<<0<<endl;
  
 }
 else{
   cout<<1<<endl;
 
 }
 if(n>=0){
  cout<<"greater than "<<n<<endl;

 }
 else{
  cout<<"less than "<<n<<endl;
 }

 }
    return 0;
}