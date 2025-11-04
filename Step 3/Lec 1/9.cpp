/*
    Time Compleiity: O(N+M)
    Space Compleiity: O(N+M)
*/

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Result;
        int i = 0,j = 0;

        while((i<nums1.size()) && (j<nums2.size()))
        {
            if(nums1[i] < nums2[j])
            {
                Result.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                Result.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i] == nums2[j])
            {
                Result.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while(i != nums1.size())
        {
            Result.push_back(nums1[i]);
            i++;
        }

        while(j != nums2.size())
        {
            Result.push_back(nums2[j]);
            j++;
        }

        return Result;
    }
};