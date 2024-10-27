class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSum = 0, buyIn = prices[0];

        for(int price : prices){
            if(buyIn > price) buyIn = price;
            maxSum = max(price - buyIn, maxSum);
        }

        return maxSum;
    }
};
