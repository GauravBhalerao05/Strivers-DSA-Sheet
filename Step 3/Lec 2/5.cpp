/*
    Time Compleiity: O(n)
    Space Compleiity: O(1)
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
int sum = INT_MIN;
int subarray = 0;
vector<int> index;
int x = 0;

    void maxSubArray(vector<int>& nums) {
        for(int i = 0; i<(nums.size()); i++){
            subarray += nums[i];
            index.push_back(i);
            
            if(sum < subarray){
                sum = subarray;
                x = i;
            }

            if(subarray < 0){
                subarray = 0;
                index.clear();
            }
        }
        
        int i = 0;
        cout<<"SubArray is: ";
        while(index[i] <= x){
            cout<<index[i]<<"\t";
            i++;
        }cout<<"\n";

        cout<<"Sum of the subarray is: "<<sum<<"\n";
    }
};

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5};

    Solution obj;
    obj.maxSubArray(nums);

    return 0;
}