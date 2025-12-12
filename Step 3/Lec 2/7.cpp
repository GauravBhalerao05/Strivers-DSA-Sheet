// Complexity
/*
- Time complexity: O(n)
- Space complexity: O(n)
*/

// Code
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v(nums.size());
        int ipos = 0, ineg = 1;

        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] > 0){
                v[ipos] = nums[i];
                ipos += 2;
            }
            else if(nums[i] < 0){
                v[ineg] = nums[i];
                ineg += 2;
            }
        }
        return v;
    }
};