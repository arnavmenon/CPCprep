#include <bits/stdc++.h>
#include <vector>
using namespace std;

//2ptr method

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    
	    int i=0,j=n-1;
	    while(i<j){
	        if(arr[i]+arr[j]==x)
	            return true;
	        else if(arr[i]+arr[j]>x)
	            j--;
	        else
	            i++;
	    }
	    
	    return 0;
}


//hash table method

bool hasArrayTwoCandidates(int arr[], int n, int sum) {
	
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        int temp = sum - arr[i];
 
        if (s.find(temp) != s.end())
            return true;
 
        s.insert(arr[i]);
    }

    return false;
}

//remainder method
/* Find all remainders when divided by req sum. If sum of remainders of 
any 2 is reqd sum, then true */