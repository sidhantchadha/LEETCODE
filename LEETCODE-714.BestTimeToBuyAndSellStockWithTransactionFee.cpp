//============================================================================
// Name        : BestTimeToBuyAndSellStockWithTransactionFee.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Best time to buy and sell stock with a transaction fee in C++, Ansi-style
//============================================================================

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int maxP=0;
        int gmax=INT_MIN;
        for(int i=0;i<prices.size();i++){
            int temp=maxP;
            maxP=max(maxP, gmax+prices[i]);
            gmax=max(gmax, temp-fee-prices[i]);
        }
        return maxP;
    }
};
