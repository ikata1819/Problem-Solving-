#include <iostream>
#include <vector>
#include <climits>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<long long> weights(n);
        std::vector<long long> prefixSum(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            std::cin >> weights[i];
            prefixSum[i + 1] = prefixSum[i] + weights[i];
        }

        long long maxDiff = LLONG_MIN;

        // Iterate through all possible values of k
        for (int k = 1; k <= n; ++k) {
            // Calculate the total weight of boxes for each truck
            for (int i = 0; i + k <= n; ++i) {
                long long sumFirstK = prefixSum[i + k] - prefixSum[i];
                long long sumLastK = prefixSum[n] - prefixSum[n - k + i];
                maxDiff = std::max(maxDiff, std::abs(sumFirstK - sumLastK));
            }
        }

        std::cout << maxDiff << std::endl;
    }

    return 0;
}
