// Complexity
/*
- Time complexity: O(n)
- Space complexity: O(1)
*/

// Code
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, profit = 0;

        if(prices.size() < 2){
            return 0;
        }

        for(int i = 0; i<prices.size(); i++) {
            if(prices[i] < buy){
                buy = prices[i];
            }
            else if((prices[i]-buy) > profit){
                profit = prices[i] - buy;
            }
        }

        return profit;
    }
};