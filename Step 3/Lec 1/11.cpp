/*
    Time Compleiity: O(N)
    Space Compleiity: O(1)
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max = INT_MIN;
        int Temp = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                Temp++;
            }
            else
            {
                if(Temp > Max)
                {
                    Max = Temp;
                    Temp = 0;
                }
                else
                {
                    Temp = 0;
                }
            }
        }
        if(Temp > Max)
        {
            Max = Temp;
        }

        return Max;
    }
};