#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = INT_MAX;
        int max_profit = 0;
        
        for(int price : prices){
            if(price < min_val){
                min_val = price;
            }
            int profit = price - min_val;
            if(profit > max_profit){
                max_profit = profit;
            }
        }
        return max_profit;
    }
};


