#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxProfit(int[] prices) {

    int minprice=prices[0];
    int profit=0;

    for(int i=1;i<prices.length;i++){

        minprice = (minprice<=prices[i]) ? minprice : prices[i];

        profit = (profit>=prices[i]-minprice) ? profit : (prices[i]-minprice);
    }

    return profit;
}