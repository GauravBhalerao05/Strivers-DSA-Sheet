#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Time Compleiity: O(N^2)
    Space Compleiity: O(N)
*/

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        vector<int> sorted = nums;
        bool match = true;

        sort(sorted.begin(), sorted.end());

        for (int x = 0; x < nums.size(); x++)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != sorted[(i + x) % (nums.size())])
                {
                    match = false;
                    break;
                }
            }
        }

        if (match) return true;
    }
};

int main()
{
    vector<int> arr;
    int x = 0, iSize = 0;
    bool iResult = false;

    cout << "Enter count of numbers: ";
    cin >> iSize;
    if ((1 > iSize) || (iSize > 100))
    {
        cout << "Invalid size!";
        return 0;
    }

    cout << "Enter numbers: ";
    for (int i = 0; i < iSize; i++)
    {
        cin >> x;

        if ((1 > x) || (x > 100))
        {
            cout << "Invalid Number !";
            return 0;
        }
        else
        {
            arr.push_back(x);
        }
    }

    Solution obj;
    iResult = obj.check(arr);
    if (iResult == true)
    {
        cout << "True" << "\n";
    }
    else
    {
        cout << "False" << "\n";
    }

    return 0;
}