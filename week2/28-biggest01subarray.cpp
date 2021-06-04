#include <bits/stdc++.h>
#include <vector>
using namespace std;

int biggest01(int arr[], int n)
{
 
    unordered_map<int, int> hash;
 
    int sum = 0; 
    int max_len = 0; 
    int end = -1;
 
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 0) ? -1 : 1;
 
 
    for (int i = 0; i < n; i++) {
 
        sum += arr[i];
  
        if (sum == 0) {
            max_len = i + 1;
            end = i;
        }
 
        if (hash.find(sum) != hash.end()) 
            if (max_len < i - hash[sum]) {

                max_len = i - hash[sum];
                end = i;
            }
        

        else 
            hash[sum] = i;
    }
 
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == -1) ? 0 : 1;
 
    return max_len;
}
 