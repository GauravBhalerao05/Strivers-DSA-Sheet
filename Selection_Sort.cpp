#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int temp = 0, j = 0;
        vector<int> vc = { };

        for(int i = 0; i<nums.size(); i++)
        {
            temp = nums[i];

            for(j = (i+1); j<nums.size(); j++)
            {
                if(nums[j]<temp)
                {
                    vc.push_back(nums[j]); 
                }
            }
            if(j == nums.size())
            {
                vc.push_back(nums[i]);
            }
        }

        return vc;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {5,6,1,8,3,4};
    vector<int> Res = {0};

    Res = obj.selectionSort(vec);
    
    for(int i = 0; i<Res.size(); i++)
    {
        cout<<Res[i];
    }

    return 0;
}