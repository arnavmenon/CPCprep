#include <bits/stdc++.h>
#include <vector>
using namespace std;

// really good solution, valley-peak approach boils down to this

int maxProfit(vector<int>& prices) {

    int profit = 0;

    for (int i = 1; i < prices.length(); i++) 
        if (prices[i] > prices[i - 1])
            profit += prices[i] - prices[i - 1];
    

    return profit;
}
