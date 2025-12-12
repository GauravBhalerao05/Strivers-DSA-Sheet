// Complexity
/*
- Time complexity: O(n²)
- Space complexity: O(1)
*/

// Code
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int temp = 0;
        int j = 0;

        for(int i = 0; i<n; i++){
            j = 0;
            while(j<=i){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                j++;
            }
        }

        for(int i = 0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }    
    }
};