#include <bits/stdc++.h>
using namespace std;

// General transpose function for any matrix (creates new matrix)
vector<vector<int>> transpose(vector<vector<int>>& mat) {
    int rows = mat.size();        
    int cols = mat[0].size();    
    
    vector<vector<int>> tMat(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tMat[j][i] = mat[i][j];  
        }
    }

    return tMat;  
}

// In-place transpose for square matrices only
void TRANS(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
}

int main() {

    // Example 1: General transpose (works for any matrix)
    vector<vector<int>> mat = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    cout << "Transpose of non-square matrix:\n";
    vector<vector<int>> res = transpose(mat);
    for (auto& row : res) {
        for (auto& elem : row) {
            cout << elem << ' ';  
        }
        cout << "\n";  
    }

    // Example 2: In-place transpose for square matrix only
    vector<vector<int>> squareMat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "\nOriginal square matrix:\n";
    for (auto& row : squareMat) {
        for (auto& elem : row) {
            cout << elem << ' ';  
        }
        cout << "\n";  
    }

    TRANS(squareMat);

    cout << "\nIn-place transpose of square matrix:\n";
    for (auto& row : squareMat) {
        for (auto& elem : row) {
            cout << elem << ' ';  
        }
        cout << "\n";  
    }

    return 0;
}
