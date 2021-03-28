#include <bits/stdc++.h>
#include <vector>
using namespace std;


int duplicate( int arr[], int n){

    int ans = 0;
    
    for (int i = 0; i < n; i++)    
        ans = ans ^ arr[i];

    for (int i = 1; i <= n-1; i++)    
        ans = ans ^ i;
     
    return ans;
}



int main()
{
	int arr[] = {3,1,3,4,2};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout<<duplicate(arr, n)<<"\n";

	return 0;
}


//gfg
/* int MissingNumber(vector<int>& array, int n) {
    int ans = 0;
    
    for (int i = 0; i < n-1; i++) {
        ans = ans ^ array[i];
    }

    for (int i = 1; i <= n; i++)    
        ans = ans ^ i;
     
    return ans;
} */