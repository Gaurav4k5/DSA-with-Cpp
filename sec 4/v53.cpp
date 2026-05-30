#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        if (m == 0) return ans; 
        int n = matrix[0].size();
        int total_elements = m * n;

        int startRow = 0;
        int endCol = n - 1; 
        int endRow = m - 1;
        int startCol = 0;

        int count = 0;
        while (count < total_elements) {
            // 1. Print starting Row 
            for (int i = startCol; i <= endCol && count < total_elements; i++) { 
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // 2. Print ending column 
            for (int i = startRow; i <= endRow && count < total_elements; i++) { 
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--; 

            // 3. Print ending row 
            for (int i = endCol; i >= startCol && count < total_elements; i--) { 
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // 4. Print starting column 
            for (int i = endRow; i >= startRow && count < total_elements; i--) { 
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++; 
        }
        return ans;
    }
};