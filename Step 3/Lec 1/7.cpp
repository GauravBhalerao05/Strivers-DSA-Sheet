/*
    Time Compleiity: O(N)
    Space Compleiity: O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int iPos = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[iPos++] = nums[i];
            }
        }

        while(iPos < nums.size())
        {
            nums[iPos++] = 0;
        }   
    }
};