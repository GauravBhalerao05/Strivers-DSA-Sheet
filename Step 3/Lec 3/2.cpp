// Complexity
/*
- Time complexity: O(n)
- Space complexity: O(n)
*/

// Code
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int min = (nums.size()/3);
        vector<int> v;
        unordered_map<int,int> mp;
        int x = 0;

        for(int i = 0; i<nums.size(); i++){
            x = nums[i];

            mp[x]++;
        }

        for(unordered_map<int,int>::iterator it = mp.begin(); it != mp.end(); it++){
            if((it->second) > min){
                v.push_back(it->first);
            }
        }

        return v;
    }
};