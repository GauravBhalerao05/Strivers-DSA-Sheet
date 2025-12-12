// Complexity
/*
- Time complexity: O(n.log(n))
- Space complexity: O(1)
*/

// Code
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int longarr = 1;
        int temp = 1;

        if(n == 1){
            return 1;
        }
        else if(n == 0){
            return 0;
        }

        for(int i = 0; i<(n-1); i++){
            if(nums[i+1] == nums[i]){
                continue;
            }
            if(nums[i+1] == (nums[i]+1)){
                temp++;
                if(temp > longarr){
                    longarr = temp;
                }
            }
            else{
                temp = 1;
            }
        }

        if(longarr == -1){
            return 0;
        }
        else{
        return longarr;
    }}
};