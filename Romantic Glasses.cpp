#include <iostream>
#include <vector>

using namespace std;

bool checkSubarray(const vector<int>& juice, int l, int r) {
  // Calculate the total juice for Iulia and her date in the subarray.
  int iuliaJuice = 0;
  for (int i = l; i <= r; ++i) {
    if ((i - l) % 2 == 0) { // Even-numbered glass for Iulia
      iuliaJuice += juice[i];
    }
  }

  int dateJuice = 0;
  for (int i = l; i <= r; ++i) {
    if ((i - l) % 2 == 1) { // Odd-numbered glass for her date
      dateJuice += juice[i];
    }
  }

  // Check if the juice amounts are equal.
  return iuliaJuice == dateJuice;
}

int main() {
  int t; // Number of test cases
  cin >> t;

  for (int i = 0; i < t; ++i) {
    int n; // Number of glasses
    cin >> n;

    vector<int> juice(n); // Amount of juice in each glass
    for (int j = 0; j < n; ++j) {
      cin >> juice[j];
    }

    bool found = false;
    for (int l = 0; l < n; ++l) {
      for (int r = l; r < n; ++r) {
        if (checkSubarray(juice, l, r)) {
          found = true;
          break; // Found a solution, no need to search further
        }
      }
    }

    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
