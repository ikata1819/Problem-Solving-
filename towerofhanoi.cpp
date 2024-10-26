#include <iostream>

void tower_of_hanoi(int n, char source, char auxiliary, char target) {
    if (n > 0) {
        // Move n-1 disks from source to auxiliary peg using target peg
        tower_of_hanoi(n - 1, source, target, auxiliary);

        // Move the nth disk from source to target peg
        std::cout << "Move disk " << n << " from " << source << " to " << target << std::endl;

        // Move the n-1 disks from auxiliary peg to target peg using source peg
        tower_of_hanoi(n - 1, auxiliary, source, target);
    }
}

int main() {
    // Example usage for n = 5
    int n = 5;
    tower_of_hanoi(n, 'A', 'B', 'C');

    return 0;
}
