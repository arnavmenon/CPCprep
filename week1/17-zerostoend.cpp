#include <bits/stdc++.h>
#include <vector>
using namespace std;


//check 19- move zeroes and keep rest in order, works for this also and shorter code

void pushZerosToEnd(int arr[], int n) {
    int left=0, right=n-1;

    while(left<right){
        
        while(arr[left]!=0 && left<right)
            left++;
        
        while(arr[right]==0 && left<right)
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