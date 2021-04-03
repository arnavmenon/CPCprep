#include <bits/stdc++.h>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int mark=0;
    
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[mark]=nums[i];
            mark++;
        }    
    }
    
    while(mark<n){
            nums[mark++]=0;
        }
}