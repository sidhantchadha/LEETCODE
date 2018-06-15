//============================================================================
// Name        : BestTimeToBuyAndSellStockII.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Best Time To Sell And Buy Stock II in C++, Ansi-style
//============================================================================

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        if(prices.size()==0)
            return maxP;
        for(int i=1;i<prices.size();i++){
            if((prices[i]-prices[i-1]) > 0)
                maxP=maxP + prices[i] - prices[i-1];
        }
        return maxP;
    }
};
