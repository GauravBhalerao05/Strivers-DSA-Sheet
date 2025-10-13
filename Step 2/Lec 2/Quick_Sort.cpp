#include<iostream>
#include<vector>
using namespace std;

/* 
    Time Complexity: O(N log(N))
    Space Complexity: O(N)
*/

class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        int Mid = nums.size()/2;
        vector<int> iLeft,iRight,Result;

        if(nums.size() <= 1)
        {
            return nums;
        }

        for(int i = 0; i<nums.size(); i++)
        {
            if(i==Mid) {
                continue;
            }
            if(nums[i]<=nums[Mid])
            {
                iLeft.push_back(nums[i]);
            }
            if(nums[i]>nums[Mid])
            {
                iRight.push_back(nums[i]);
            }            
        }

        iLeft = quickSort(iLeft);
        iRight = quickSort(iRight);

        Result.insert(Result.end(), iLeft.begin(), iLeft.end());
        Result.push_back(nums[Mid]);
        Result.insert(Result.end(), iRight.begin(), iRight.end());

        return Result;
    }
};

int main()
{
    int iCount = 0,iTemp = 0;
    vector<int> num, NumNew;

    cout<<"Enter count: ";
    cin>>iCount;

    cout<<"Enter numbers:";
    for(int i = 0; i<iCount; i++)
    {
        cin>>iTemp;
        num.push_back(iTemp);
    }

    Solution obj;
    NumNew = obj.quickSort(num);

    cout<<"Sorted: ";
    for(int i = 0; i<NumNew.size(); i++)
    {
        cout<<NumNew[i]<<"\t";
    }cout<<"\n";

    return 0;
}