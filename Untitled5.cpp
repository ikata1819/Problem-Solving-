#include <iostream>
#include <cmath>
using namespace std;

long long calculate_energy(long long n, long long x1, long long y1, long long x2, long long y2) {
    // Calculate the layer numbers for the starting and ending cells
    long long layer1 = (x1 + y1 - 2) / 2;
    long long layer2 = (x2 + y2 - 2) / 2;

    // Calculate the Manhattan distance within the same layer
    long long energy_within_layer = abs(x1 - x2) + abs(y1 - y2);

    // Calculate the absolute difference in layer numbers
    long long layer_difference = abs(layer1 - layer2);

    // Calculate the total energy required
    long long total_energy = energy_within_layer + layer_difference;

    return total_energy;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x1, x2, y1, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        long long result = calculate_energy(n, x1, y1, x2, y2);
        cout << result*2/n << endl;
    }

    return 0;
}

