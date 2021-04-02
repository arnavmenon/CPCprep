#include <bits/stdc++.h>
#include <vector>
using namespace std;

//works for single duplicate;

/* int duplicate( int arr[], int n){

    int ans = 0;
    
    for (int i = 0; i < n; i++)    
        ans = ans ^ arr[i];

    for (int i = 1; i <= n-1; i++)    
        ans = ans ^ i;
     
    return ans;
}
 */


int duplicate(vector<int>& nums) {

        for(auto i: nums){

            if(nums[abs(i)]<0) 
                return abs(i);

            else
                nums[abs(i)] *=-1;
        }
        
        return -1;
}

