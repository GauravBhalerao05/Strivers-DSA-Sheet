#include<iostream>
#include<vector>
using namespace std;

/* 
    Time Complexity: O(N²)
    Space Complexity: O(N)
*/

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) 
    {
        return insertionSort(nums,1);
    }

    vector<int> insertionSort(vector<int>& nums, int iCnt) {

            if(iCnt >= nums.size())
            {
                return nums;
            }

            int iCurrent = nums[iCnt];
            auto prev = nums.begin() + iCnt;
            prev--;

            while((prev>=nums.begin()) && (*prev>iCurrent))
            {
                *(prev+1) = *prev;
                prev--;
            }
            *(prev+1) = iCurrent;

            return insertionSort(nums, iCnt+1);
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
    NumNew = obj.insertionSort(num);

    cout<<"Sorted: ";
    for(int i = 0; i<NumNew.size(); i++)
    {
        cout<<NumNew[i]<<"\t";
    }cout<<"\n";

    return 0;
}