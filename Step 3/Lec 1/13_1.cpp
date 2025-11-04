#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
    Time Compleiity: O(N^2)
    Space Compleiity: O(1)
*/

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int iSum = 0;
        int output = -1;

        for(int i = 0; i<nums.size(); i++)
        {
            int j = 0;

            for(j = i; j<nums.size(); j++)
            {
                if(iSum >= k)
                {
                    break;
                }

                iSum = iSum + nums[j];
            }

            if(iSum == k)
            {
                if((j-i) > output)
                {
                    output = j-i;
                }
                iSum = 0;
            }
            else{
                iSum = 0;
            }
        }

        if(output == -1)
        {
            return 0;
        }
        else{
        return output;
        }
    }
};

int main()
{
    vector<int> vec = {10,5,2,7,1,9};

    Solution obj;
    int max = obj.longestSubarray(vec,15);
    cout<<max<<"\n";

    return 0;
}