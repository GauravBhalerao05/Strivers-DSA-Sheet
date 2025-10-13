#include <iostream>
#include <vector>
using namespace std;

/* 
    Time Complexity: O(N²)
    Space Complexity: O(N)
*/

class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        return bubbleSort(nums, 0);
    }

    vector<int> bubbleSort(vector<int> &nums, int iCnt)
    {
        int iTemp = 0;

        if (iCnt == (nums.size() - 1))
        {
            return nums;
        }

        for (int j = 0; j < (nums.size() - iCnt - 1); j++)
        {
            if (nums[j] > nums[j + 1])
            {
                iTemp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = iTemp;
            }
        }

        return bubbleSort(nums,iCnt+1);
    }
};

int main()
{
    int iCount = 0, iTemp = 0;
    vector<int> num, NumNew;

    cout<<"Enter Count: ";
    cin>>iCount;

    cout << "Enter numbers:";
    for (int i = 0; i < iCount; i++)
    {
        cin >> iTemp;
        num.push_back(iTemp);
    }

    Solution obj;
    NumNew = obj.bubbleSort(num);

    cout << "Sorted: ";
    for (int i = 0; i < NumNew.size(); i++)
    {
        cout << NumNew[i] << "\t";
    }
    cout << "\n";

    return 0;
}