// Linear Scan Pattern

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];

        for(int i = 1; i<prices.size();i++)
        {
            int currentProfit = prices[i] - minPrice;

            maxProfit = max(currentProfit, maxProfit);
            minPrice = min(prices[i], minPrice);
        }
        return maxProfit;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)





/*
// Brute force solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j] - prices[i] >= maxProfit)
                {
                    maxProfit = prices[j] - prices[i];
                }
            }
        }

        return maxProfit;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)
*/