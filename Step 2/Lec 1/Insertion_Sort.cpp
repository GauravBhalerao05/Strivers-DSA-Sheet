#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {

        auto prev= nums.begin();
        int iCurrent = 0, iTemp = 0;

        for(int i = 1; i<nums.size(); i++)
        {
            iCurrent = nums[i];
            auto prev = nums.begin()+i;
            prev--;

            while((prev>=nums.begin()) && (*prev>iCurrent))
            {
                *(prev+1) = *prev;
                prev--;
            }
            *(prev+1) = iCurrent;
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
    NumNew = obj.insertionSort(num);

    cout<<"Sorted: ";
    for(int i = 0; i<NumNew.size(); i++)
    {
        cout<<NumNew[i]<<"\t";
    }cout<<"\n";
    return 0;
}