#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int INT_MAX_VAL = INT_MAX;

void printMatrix(const vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == INT_MAX_VAL) {
                cout << "INF\t";
            } else {
                cout << matrix[i][j] << "\t";
            }
        }
        cout << endl;
    }
}

void floydWarshall(vector<vector<int>> &graph) {
    int n = graph.size();

    // Applying Warshall's algorithm
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (graph[i][k] != INT_MAX_VAL && graph[k][j] != INT_MAX_VAL &&
                    graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n, INT_MAX_VAL));

    cout << "Enter the weight matrix (0 for no edge, -1 for no path with itself, weight for other paths):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
            if (graph[i][j] == 0 && i != j) {
                graph[i][j] = INT_MAX_VAL;
            }
        }
    }

    // Applying Warshall's algorithm
    floydWarshall(graph);

    cout << "Shortest path matrix:\n";
    printMatrix(graph);

    return 0;
}
