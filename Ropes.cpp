#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Define the function f(x) = x^2 + sqrt(x)
double f(double x) {
    return x * x + sqrt(x);
}

int main() {
    double c;
    cin >> c;

    // Binary search initialization
    double low = 0.0;
    double high = max(c, 1.0); // Start with a reasonable upper bound
    double mid;
    
    // Precision level (10^-6)
    const double eps = 1e-7;

    // Perform binary search
    while (high - low > eps) {
        mid = (low + high) / 2.0;
        
        if (f(mid) < c) {
            low = mid; // mid is too small
        } else {
            high = mid; // mid is too large
        }
    }

    // Output the result with sufficient precision
    cout << fixed << setprecision(7) << mid << endl;
    return 0;
}
