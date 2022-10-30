#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int min = prices[0], profit = 0;
    for(auto &i:prices) {
        if(i<min) min = i;
        if(i-min > profit) profit = i - min;
    }
    return profit;
}