class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestBuy = 0;
        int maxProfit = 0;

        for(int bestSell = 1;bestSell < n;bestSell++){
            if(prices[bestSell] < prices[bestBuy]){
                bestBuy = bestSell;
                continue;
            }
            int currProfit = prices[bestSell] - prices[bestBuy];
            maxProfit = max(maxProfit,currProfit);
        }

        return maxProfit;

    }
};
