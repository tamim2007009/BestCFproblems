#include <bits/stdc++.h>
using namespace std;

pair<int,int> gcddiv(int a, int b) {
    if (b == 0) return {1, 0}; // Handling zero division
    int gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;
    return {a, b};
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cout<<INT_MAX<<endl;
    return 0;
}
