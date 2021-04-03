#include <bits/stdc++.h>
#include <vector>
using namespace std;


int oddOcc( int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)    
        ans = ans ^ arr[i];
     
    return ans;
}

int oddOccHash( int arr[], int n){
    
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for (auto i: hash){
        if(i.second%2 != 0)
            return i.first;
    }
}


int main()
{
	int arr[] = { 2, 2, 4, 5, 5, 4, 4};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout<<oddOcc(arr, n)<<"\n";
    cout<<"\n"<<oddOccHash(arr, n)<<"\n";

	return 0;
}


//gfg
/* class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int ans = 0;
        for (int i = 0; i < n; i++)    
            ans = ans ^ arr[i];
         
        return ans;
    }
}; */