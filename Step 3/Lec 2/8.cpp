// Complexity
/*
- Time complexity: O(n)
- Space complexity: O(1)
*/

// Code
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ibreak = -1;
        int toswap = 0;

        for(int i = (n-2); i>=0; i--){
            if(nums[i] < nums[i+1]){
                ibreak = i;
                break;
            }
        }

        if(ibreak != -1){
        int diff = INT_MAX;
        for(int i = (n-1); i>ibreak; i--){
            if(nums[i] <= nums[ibreak]){
                continue;
            }

            if((nums[i]-nums[ibreak]) < diff){
                diff = nums[i]-nums[ibreak];
                toswap = i;
            }
        }

        swap(nums[toswap],nums[ibreak]);

        sort(nums.begin() + ibreak + 1, nums.end());
        }
        else{
            sort(nums.begin(), nums.end());
        }
    }
};
