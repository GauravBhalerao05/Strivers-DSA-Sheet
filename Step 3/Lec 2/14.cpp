// Complexity
/*
- Time complexity: O(n)
- Space complexity: O(n)
*/

// Code
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int need = 0, prefix = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count = 0;

        for(int i = 0; i<nums.size(); i++){
            prefix += nums[i];
            need = prefix - k;

            if(mp.count(need)){
                count += mp[need];
            }
            mp[prefix]++;
            
        }

        return count;
    }
};