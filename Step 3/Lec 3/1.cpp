// Complexity
/*
- Time complexity: O(n²)
- Space complexity: O(n²)
*/

// Code
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        int x;

        for(int i = 0; i<numRows; i++){
            v.emplace_back();
            for(int j = 0; j<=i; j++){
                if((j == 0) || (j == i)){
                    v[i].push_back(1);
                }
                else{
                    x = v[i-1][j-1] + v[i-1][j];
                    v[i].push_back(x);
                }
            }
        }
        return v;
    }
};