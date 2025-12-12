/*
    Time Compleiity: O(n)
    Space Compleiity: O(1)
*/

class Solution {
public:
int sum = INT_MIN;
int subarray = 0;

    int maxSubArray(vector<int>& nums) {
        for(int i = 0; i<(nums.size()); i++){
            subarray += nums[i];
            
            if(sum < subarray){
                sum = subarray;
            }

            if(subarray < 0){
                subarray = 0;
            }
        }
        return sum;
    }
};