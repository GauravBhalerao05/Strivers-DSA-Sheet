#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    Time Compleiity: O(N)
    Space Compleiity: O(N)
*/

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int iSum = 0;
        unordered_map<int, int> map;
        int prefixsum = 0;
        int maxlen = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            prefixsum += nums[i];

            if (prefixsum == k)
            {
                maxlen = i + 1;
            }

            if (map.find(prefixsum - k) != map.end())
            {
                int len = i - map[prefixsum-k];
                maxlen = max(maxlen,len);
            }

            if(map.find(prefixsum-k) == map.end())
            {
                map[prefixsum] = i;
            }
        }

        return maxlen;
    }
};

int main()
{
    vector<int> vec = {-3,2,1};

    Solution obj;
    int max = obj.longestSubarray(vec, 6);
    cout << max << "\n";

    return 0;
}