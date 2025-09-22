#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here

        map<int,int> mp;
        vector<vector<int>> Vec;
        int i = 0;

        for(i = 0; i<nums.size(); i++)
        {
            mp[nums[i]] += 1;
        }
        
        auto it = mp.begin();
        for(i = 0; i<mp.size(); i++)
        {
            Vec.push_back({it->first,it->second});
            it++;
        }

        return Vec;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> Vect;
    vector<int> Numbs;
    int iCount = 0, x = 0, i = 0;

    cout<<"Enter the count of numbers: ";
    cin>>iCount;

    cout<<"Enter the numbers: "<<"\n";
    for(i = 0; i<iCount; i++)
    {
        cin>>x;
        Numbs.push_back(x);
    }

    Vect = obj.countFrequencies(Numbs);

    for(i = 0; i<Vect.size(); i++)
    {
        cout<<Vect[i][0]<<"  ->  "<<Vect[i][1]<<"\n";
    }

    return 0;
}