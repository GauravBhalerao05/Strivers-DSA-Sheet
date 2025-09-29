#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) 
    {
        int iTemp = 0;

        for(int i = 0; i<(nums.size()-1); i++)
        {
            for(int j = (i+1); j<nums.size(); j++)
            {
                if(nums[j]<nums[i])
                {
                    iTemp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = iTemp;
                }
            }
        }

        return nums;
    }
};

int main()
{
    vector<int> num;
    int iCount = 0, iTemp = 0;
    Solution obj;

    cout<<"Enter count: ";
    cin>>iCount;

    cout<<"Enter numbers:";
    for(int i = 0; i<iCount; i++)
    {
        cin>>iTemp;
        num.push_back(iTemp);
    }

    auto numNew = obj.selectionSort(num);

    cout<<"Sorted: ";
    for(int i = 0; i<numNew.size(); i++)
    {
        cout<<numNew[i]<<"\t";
    }cout<<"\n";

    return 0;
}