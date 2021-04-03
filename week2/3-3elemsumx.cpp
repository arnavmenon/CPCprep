#include <bits/stdc++.h>
#include <vector>
using namespace std;

//2ptr method, same as q2, set one elem and do 2 elem sum, same for hash also

bool hasArrayTwoCandidates(int arr[], int n, int x) {

	    sort(arr,arr+n);
	    
	    for(int k=0;k<n;k++){
            
            int i=k+1,j=n-1;

            while(i<j){
                if(arr[i]+arr[j]+arr[k]==x)
                    return true;
                else if(arr[i]+arr[j]+arr[k]>x)
                    j--;
                else
                    i++;
            }
            
        }

        return false;
}


//hash table method

bool hasArrayTwoCandidates(int arr[], int n, int sum) {
	
    for (int i = 0; i < n-2; i++)
    {

        unordered_set<int> s;
        int curr_sum = sum - A[i];

        for (int j = i + 1; j < arr_size; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
                return true;
                
            s.insert(A[j]);
        }
    }
 
    return false;
}
