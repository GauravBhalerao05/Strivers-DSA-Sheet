class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int current, majority = 0, res;

        for(int i = 0; i<nums.size(); i++)
        {
            map[nums[i]]++;
            current = map[nums[i]];

            if(current > majority)
            {
                majority = current;
                res = nums[i];
            }
        }

    
        return res;
       
    }
};

/*
    Time Compleiity: O(N)
    Space Compleiity: O(1)
*/