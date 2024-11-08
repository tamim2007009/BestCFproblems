#include <iostream>
using namespace std;

// Function to count how many numbers in the n x n multiplication table are <= x
long long countLessEqual(int n, long long x) {
    long long count = 0;
    for (int i = 1; i <= n; i++) {
        count += min(n, (int)(x / i));
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    
    long long left = 1, right = (long long)n * n;
    long long target = (n * n + 1) / 2;  // Target is the median position
    
    // Binary search for the middle element
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (countLessEqual(n, mid) < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    // The answer is the value of `left` (or `right`, they will converge)
    cout << left << endl;
    
    return 0;
}
