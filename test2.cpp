#include <bits/stdc++.h>
using namespace std;
 



int findNumberOfStrings(int N)
{
    
    vector<int> counts(5, 1);
 
    for (int i = 2; i <= N; i++) {
        for (int j = 3; j >= 0; j--)
            counts[j] += counts[j + 1];
    }
 
    int ans = 0;
 
    
    for (auto c : counts)
        ans += c;
 
    
    return ans;
}
 

int main()
{
    int N = 4;
 
    
    cout << findNumberOfStrings(N);
 
    return 0;
}