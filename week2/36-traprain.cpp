#include <bits/stdc++.h>
#include <vector>
using namespace std;

int trap(vector<int>& A) {
    
    int left=0; int right=A.size()-1;
    int res=0,maxleft=0,maxright=0;

    while(left<=right){

        if(A[left]<=A[right]){
            if(A[left]>=maxleft) 
                maxleft=A[left];
            else 
                res+=maxleft-A[left];

            left++;
        }
        else{
            if(A[right]>=maxright) 
                maxright= A[right];
            else 
                res+=maxright-A[right];
                
            right--;
        }
    }

    return res;
}