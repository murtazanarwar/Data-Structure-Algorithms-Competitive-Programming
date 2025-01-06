#include <bits/stdc++.h>
using namespace std;

int findMaxElement(vector<vector<int>>& mat, int n, int m, int col) {
    int maxInd = -1, maxValue = -1;
    for (int i = 0; i < n; i++) {
        if (mat[i][col] > maxValue) {
            maxInd = i;
            maxValue = mat[i][col];
        }
    }
    return maxInd;
}

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int row = findMaxElement(mat, n, m, mid);
        int left = (mid - 1 >= 0) ? mat[row][mid - 1] : -1;
        int right = (mid + 1 < m) ? mat[row][mid + 1] : -1;
        if (mat[row][mid] > left && mat[row][mid] > right) {
            return {row, mid};
        } else if (mat[row][mid] < left) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << (i < v.size() - 1 ? ", " : "\n");
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15}, 
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22}, 
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    
    vector<int> ans = findPeakGrid(matrix);
    printVector(ans);
    
    return 0;
}
