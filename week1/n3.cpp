#include <bits/stdc++.h>
#include <vector>
using namespace std;

n3Hash(const vector<int> &A) {         //exceeds memory limitations should be constant
    
    int n=A.size();
    
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[A[i]]++;
    }

    for (auto i: hash){
        if(i.second > (n/3))
           return i.first; 
    }   
    
    return -1;
}



//ibit

/* class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int ans = 0;
        for (int i = 0; i < n; i++)    
            ans = ans ^ arr[i];
         
        return ans;
    }
}; */