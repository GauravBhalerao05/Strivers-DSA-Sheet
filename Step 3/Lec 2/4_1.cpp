/*
    Time Compleiity: O(n²)
    Space Compleiity: O(1)
*/

class Solution {
public:
int sum = INT_MIN;
int subarray = 0;

    int maxSubArray(vector<int>& nums) {
        for(int i = 0; i<(nums.size()); i++){
            for(int j = i; j<(nums.size()); j++){
                subarray += nums[j];
                if(sum < subarray){
                    sum = subarray;
                }
            }
            subarray = 0;
        }
        return sum;
    }
};