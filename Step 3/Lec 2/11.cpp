// Complexity
/*
- Time complexity: O(n²)
- Space complexity: O(n²)
*/

// Code
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> pair;
        int n = matrix[0].size();
        int m = matrix.size();
        int temp = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    pair.emplace_back(i,j);
                }
            }
        }

        for(int i = 0; i<pair.size(); i++){
            temp = pair[i].first;
            for(int j = 0; j<n; j++){
                matrix[temp][j] = 0;
            }

            temp = pair[i].second;
            for(int j = 0; j<m; j++){
                matrix[j][temp] = 0;
            }
        }
    }
};