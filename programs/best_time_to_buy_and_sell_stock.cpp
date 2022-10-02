//  Best time to buy and sell stock
// Problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int max_profit = 0;
    
    int buy_price = prices[0];
    int i = 0;
    while(i<prices.size()){
            
        if(prices[i]<buy_price){
            buy_price = prices[i];
        }
        int currProfit = prices[i]-buy_price;
        if(prices[i]>buy_price && currProfit>max_profit){
            max_profit = currProfit;
        }
        i++;
    }
    
    return max_profit;
}

int main(){

    vector<int> prices = {7, 1, 5, 3, 6, 4};


    cout<<maxProfit(prices)<<endl;

    return 0;
}