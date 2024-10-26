#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define nl '\n'

void solve() {
    int n;
    cin >> n; // Number of students and seats

    vi preferred(n);      // Preferred seats for each student
    vi dissatisfaction(n); // Dissatisfaction values for each student

    // Read the preferred seats
    for (int i = 0; i < n; i++) {
        cin >> preferred[i];
    }

    // Read the dissatisfaction values
    for (int i = 0; i < n; i++) {
        cin >> dissatisfaction[i];
    }

    // Create a vector of tuples (dissatisfaction, preferred_seat, index)
    vector<tuple<int, int, int>> students; // (dissatisfaction, preferred_seat, index)
    for (int i = 0; i < n; i++) {
        students.emplace_back(dissatisfaction[i], preferred[i], i);
    }

    // Sort students by dissatisfaction in descending order using a custom comparator
    sort(students.begin(), students.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
        return get<0>(a) > get<0>(b); // Compare by dissatisfaction (first element)
    });

    // Result array for seat assignments
    vi result(n, -1);
    set<int> occupied; // Set to keep track of occupied seats
    priority_queue<int, vector<int>, greater<int>> available_seats; // Min-heap for available seats

    // Initialize available seats
    for (int i = 1; i <= n; i++) {
        available_seats.push(i); // Push all seat numbers to the priority queue
    }

    int total_dissatisfaction = 0; // Total dissatisfaction

    // Loop over each student based on dissatisfaction (highest first)
    for (const auto& student : students) {
        int dissatisfaction_value = get<0>(student);
        int preferred_seat = get<1>(student);
        int index = get<2>(student);

        // Check if the preferred seat is available
        if (occupied.find(preferred_seat) == occupied.end()) {
            // If the preferred seat is not occupied, assign it to the student
            result[index] = preferred_seat;
            occupied.insert(preferred_seat); // Mark this seat as occupied
        } else {
            // If the preferred seat is occupied, find the next available seat from the priority queue
            while (!available_seats.empty() && occupied.find(available_seats.top()) != occupied.end()) {
                available_seats.pop(); // Remove occupied seats from the heap
            }
            if (!available_seats.empty()) {
                int next_seat = available_seats.top();
                available_seats.pop(); // Get the next available seat
                result[index] = next_seat; // Assign this seat
                total_dissatisfaction += dissatisfaction_value; // Add dissatisfaction value
                occupied.insert(next_seat); // Mark this seat as occupied
            }
        }
    }

    // Output the total dissatisfaction
    cout << total_dissatisfaction << nl;

    // Output the seating arrangement
    for (int seat : result) {
        cout << seat << " "; // Print each assigned seat
    }
    cout << nl; // New line after the seats
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0); // Fast input/output

    int t = 1; // Number of test cases
    // cin >> t; // Uncomment if you want to run multiple test cases
    while (t--) {
        solve(); // Call the solve function
    }

    return 0;
}
