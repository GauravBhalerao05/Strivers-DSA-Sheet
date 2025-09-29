#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int iTemp = 0;

        for(int i = 0; i<(nums.size()-1); i++)
        {
            for(int j = 0; j<(nums.size()-i-1); j++)
            {
                if(nums[j]>nums[j+1])
                {
                    iTemp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = iTemp;
                }
            }
        }

        return nums;
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
    NumNew = obj.bubbleSort(num);

    cout<<"Sorted: ";
    for(int i = 0; i<NumNew.size(); i++)
    {
        cout<<NumNew[i]<<"\t";
    }cout<<"\n";

    return 0;
}