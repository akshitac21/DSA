//Give N, Q and query inputs

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDiagonalNumbers(int N, int Q, vector<long long>& query) {
    vector<int> DiagonalNumber(Q);

    // Create the matrix and fill it with values in a diagonally sorted manner
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    int currentNum = 1;

    for (int i = 0; i < N; i++) {
        int row = i;
        int col = 0;
        while (row >= 0 && col < N) {
            matrix[row][col] = currentNum;
            currentNum++;
            row--;
            col++;
        }
    }

    for (int j = 1; j < N; j++) {
        int row = N - 1;
        int col = j;
        while (row >= 0 && col < N) {
            matrix[row][col] = currentNum;
            currentNum++;
            row--;
            col++;
        }
    }

    unordered_map<long long, int> diagonalMap;

    // Build the map to store the diagonal position for each element
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int element = matrix[i][j];
            int diagonal = i + j + 1;
            diagonalMap[element] = diagonal;
        }
    }

    for (int i = 0; i < Q; i++) {
        long long x = query[i];

        // Find the diagonal number based on the element's position in the map
        if (diagonalMap.count(x) > 0) {
            DiagonalNumber[i] = diagonalMap[x];
        } else {
            DiagonalNumber[i] = -1;  // Element not found in the matrix
        }
    }

    return DiagonalNumber;  // Return a vector of diagonal numbers for each value in the query
}

int main() {
    int N;
    cin>>N;
    int Q;
    cin>>Q;
    vector<long long> query(Q);
    for(int i=0; i<Q; i++){
        cin >> query[i];
    }

    vector<int> out = findDiagonalNumbers(N, Q, query);
    //cout << out_[0];
    for (int i = 0; i < out.size(); i++) {
        cout << out[i]<<"\n";
    }

    return 0;
}
