#include <bits/stdc++.h>
#include <vector>
using namespace std;

//gfg 

vector<int> singleNumber(vector<int> arr) 
    {
        int op = 0; 
    	int rightmost1,i; 
    	
    	int n=arr.size();
    	
    	for(i = 0; i < n; i++)
    		op ^= arr[i];

    	rightmost1 = op &~ (op-1);
        int a = 0, b = 0;
    
    	for(i=0; i < n; i++)
    	{
    		if(arr[i] & rightmost1)
    		    a = a ^ arr[i]; 
    		else
    		    b = b ^ arr[i];
    	}

    		
    	vector<int> ans;
    	if (a<b){
    	    ans.push_back(a);
    	    ans.push_back(b);
    	}
    	else{
    	    ans.push_back(b);
    	ans.push_back(a);
    	}
    	
    	
    	
    	return ans;
}  