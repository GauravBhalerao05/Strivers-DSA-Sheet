// Complexity
/*
- Time complexity: O(n)
- Space complexity: O(n)
*/

// Code
#include<iostream>
#include<deque>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        int leader = nums[n-1];
        deque<int> dq;
        dq.push_front(leader);

        if(n < 2){
            cout<<nums[0];
        }
        else{
        for(int i = (n-2); i>= 0; i--){
            if(nums[i] > leader){
                leader = nums[i];
                dq.push_front(leader);
            }
        }

        for(int i = 0; i<dq.size(); i++){
            cout<<dq[i]<<"\t";
        }cout<<"\n";
        }
    }
};

int main(){
    vector<int> v = {-3};

    Solution obj;
    obj.leaders(v);
}