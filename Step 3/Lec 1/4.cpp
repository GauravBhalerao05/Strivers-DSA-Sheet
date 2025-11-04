/*
    Time Compleiity: O(N^2)
    Space Compleiity: O(1)
*/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size();
        auto it = nums.begin();
        int count = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        return nums.size();
    }
};