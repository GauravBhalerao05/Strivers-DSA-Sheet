class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int x = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            x = target - nums[i];

            if(map.find(target - nums[i]) != map.end())
            {
                return {map[x],i};
            }

            map[nums[i]] = i;
        }

        return {};
    }
};

/*
    Time Compleiity: O(N)
    Space Compleiity: O(1)
*/