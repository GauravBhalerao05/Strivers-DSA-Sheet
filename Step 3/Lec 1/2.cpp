#include<iostream>
#include<vector>
#include<climits>
using namespace std;

/* 
    Time Compleiity: O(N)
    Space Compleiity: O(1)
*/

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int max1 = nums[0], max2 = INT_MIN;

        for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > max1) {
            max2 = max1;   
            max1 = nums[i];
        } else if(nums[i] < max1 && nums[i] > max2) {
            max2 = nums[i]; 
        }
    }

        if(max2 == INT_MIN){
            cout<<"No second largest element is present!";
            return INT_MIN;
        }
        else{
            return max2;
        }
    }
};

int main()
{
    vector<int> arr;
    int iResult = 0, x = 0, iSize = 0;

    cout<<"Enter count of numbers: ";
    cin>>iSize;
    if (iSize <= 1) {
        cout << "Invalid size!";
        return 0;
    }

    cout<<"Enter numbers to find Second largest element: ";
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
    iResult = obj.secondLargestElement(arr);
    if(iResult != INT_MIN){
        cout<<"Second Largest element is: "<<iResult<<"\n";
    }

    return 0;
}