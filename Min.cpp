#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long n, k;
        std::cin >> n >> k;

        int operations = 0;  

        
        if (k == 1 || k > n) {
            std::cout << n << std::endl;
        } else {
            while (n != 0) {
                
                int maxPower = 0;
                long long kPower = k;

                while (kPower <= n) {
                    maxPower++;
                    kPower *= k;
                }
                kPower /= k; 

                
                n -= kPower;
                operations++;
            }

            std::cout << operations << std::endl;
        }
    }

    return 0;
}
