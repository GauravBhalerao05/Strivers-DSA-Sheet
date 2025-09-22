#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
    public:
        int mostFrequentElement(vector<int>& nums) {

            map<int,int> mp;

            for(int i = 0; i<nums.size(); i++)
            {
                mp[nums[i]] += 1;
            }

            auto Res = mp.begin();
            Res = max_element((mp.begin()),(mp.end()),
                [](const auto& a, const auto& b)
                {
                    return a.second < b.second;
                });

            return Res->first;
        }
};

int main()
{
    vector<int> nums;
    int N = 0, x = 0, iRes = 0;

    cout<<"Enter count of numbers: ";
    cin>>N;

    for(int i = 0; i<N; i++)
    {
        cin>>x;
        nums.push_back(x);
    }

    Solution obj;
    iRes = obj.mostFrequentElement(nums);

    cout<<"Output: "<<iRes<<"\n";

    return 0;
}

// Time Complexity: O(N)
// Sapce Complexity: O(N)