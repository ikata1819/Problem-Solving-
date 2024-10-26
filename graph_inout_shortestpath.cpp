#include <iostream>
#include <climits>
#include <iomanip>
#define MAX_NODES 100

using namespace std;

void findInOutDegree(int A[MAX_NODES][MAX_NODES], int nodes) {
    int inDegree[MAX_NODES] = {0};
    int outDegree[MAX_NODES] = {0};

    for (int i = 1; i <= nodes; ++i) {
        for (int j = 1; j <= nodes; ++j) {
            if (A[i][j]>=1 && A[i][j]<INT_MAX) {
                inDegree[j]++;
            }
        }
    }
for (int i = 1; i <= nodes; ++i) {
        for (int j = 1; j <= nodes; ++j) {
            if (A[j][i] >= 1 && A[j][i]<INT_MAX) {
                outDegree[j]++;

            }
        }
    }
    cout << "Vertex\t\tIn-Degree\t\tOut-Degree" << endl;
    for (int i = 1; i <= nodes; ++i) {
        cout << i << "\t\t" << inDegree[i] << "\t\t" << outDegree[i] << endl;
    }
}

void findPathMatrix(int A[MAX_NODES][MAX_NODES], int nodes, int P[MAX_NODES][MAX_NODES]) {
    for (int i = 1; i <= nodes; ++i) {
        for (int j = 1; j <= nodes; ++j) {
            if (A[i][j] == 0) {
                P[i][j] = 0;
            } else {
                P[i][j] = 1;
            }
        }
    }

    for (int k = 1; k <= nodes; ++k) {
        for (int i = 1; i <= nodes; ++i) {
            for (int j = 1; j <= nodes; ++j) {
                P[i][j] = P[i][j] || (P[i][k] && P[k][j]);
            }
        }
    }
}

void findShortestPathMatrix(int W[MAX_NODES][MAX_NODES], int nodes, int Q[MAX_NODES][MAX_NODES]) {
    // Initialize Q matrix with direct edge weights or INFINITY if there is no direct edge
    for (int i = 1; i <= nodes; ++i) {
        for (int j = 1; j <= nodes; ++j) {
            if (W[i][j] == 0) {
                Q[i][j] = INT_MAX; // Using INT_MAX to represent infinity
            } else {
                Q[i][j] = W[i][j];
            }
        }
    }

    // Floyd-Warshall algorithm to find shortest paths
    for (int k = 1; k <= nodes; ++k) {
        for (int i = 1; i <= nodes; ++i) {
            for (int j = 1; j <= nodes; ++j) {
                if (Q[i][k] != INT_MAX && Q[k][j] != INT_MAX) {
                    Q[i][j] = min(Q[i][j], Q[i][k] + Q[k][j]);
                }
            }
        }
    }
}

int main() {
    int choice;
    int nodes;
    int A[MAX_NODES][MAX_NODES] = {0}; // Adjacency matrix
    int P[MAX_NODES][MAX_NODES] = {0}; // Path matrix
    int W[MAX_NODES][MAX_NODES] = {0}; // Weight matrix
    int Q[MAX_NODES][MAX_NODES] = {0}; // Shortest path matrix

    cout << "Enter the number of nodes in the graph: ";
    cin >> nodes;

    cout << "Enter the adjacency matrix for the directed graph:" << endl;
    for (int i = 1; i <= nodes; ++i) {
        for (int j = 1; j <= nodes; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the weight matrix for the graph (0 for no edge):" << endl;
    for (int i = 1; i <= nodes; ++i) {
        for (int j = 1; j <= nodes; ++j) {
            cin >> W[i][j];
        }
    }

    do {
        cout << "\nMenu:\n1. Find In-degree and Out-degree\n2. Find Path Matrix\n3. Find Shortest Path Matrix\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                findInOutDegree(A, nodes);
                break;
            case 2:
                findPathMatrix(A, nodes, P);
                cout << "Path Matrix:" << endl;
                for (int i = 1; i <= nodes; ++i) {
                    for (int j = 1; j <= nodes; ++j) {
                        cout << P[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            case 3:
                findShortestPathMatrix(W, nodes, Q);
                cout << "Shortest Path Matrix:" << endl;
                for (int i = 1; i <= nodes; ++i) {
                    for (int j = 1; j <= nodes; ++j) {
                            if(Q[i][j]==INT_MAX)
                            cout<<setw(5)<<"INF";
                    else
                        cout <<setw(5)<<Q[i][j];
                    }
                    cout << endl;
                }
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 4);


    return 0;
}
/*
0 0 6 10
5 7 0 8
2 0 0 6
0 0 0 0

0 0 1 1
1 1 0 1
1 0 0 1
0 0 0 0
*/
