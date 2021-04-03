#include <bits/stdc++.h>
#include <vector>
using namespace std;

void segregateEvenOdd(int arr[], int n) {
	    
    int left=0, right=n-1;
    
    while(left<right){
        
        while(arr[left]%2==0 && left<right)
            left++;
        
        while(arr[right]%2==1 && left<right)
            right--;
            
        if (left<right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            
            left++;
            right--;
        }
    }
}