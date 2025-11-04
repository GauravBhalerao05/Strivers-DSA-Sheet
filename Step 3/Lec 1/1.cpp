#include<iostream>
#include<vector>
using namespace std;

/* 
    Time Compleiity: O(N)
    Space Compleiity: O(1)
*/

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int iLarge = nums[0];

        for(int i = 1; i<nums.size(); i++)
        {
            if(iLarge < nums[i])
            {
                iLarge = nums[i];
            }
        }

        return iLarge;
    }
};

int main()
{
    vector<int> arr;
    int iResult = 0, x = 0, iSize = 0;

    cout<<"Enter count of numbers: ";
    cin>>iSize;
    if (iSize <= 0) {
        cout << "Invalid size!";
        return 0;
    }


    cout<<"Enter numbers to find largest: ";
    for(int i = 0; i<iSize; i++)
    {
        cin>>x;

        if((-10000 >= x) || (x >= 10000)) {
            cout<<"Invalid Number !";
            return 0;
        }
        else {
            arr.push_back(x);
        }
    }

    Solution obj;
    iResult = obj.largestElement(arr);
    cout<<"Largest element is: "<<iResult<<"\n";

    return 0;
}