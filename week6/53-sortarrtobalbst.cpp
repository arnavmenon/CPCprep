#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* sortedArrayToBST(int arr[], int start, int end) 
{ 
    if (start > end) 
        return nullptr; 
  
    int mid = (start + end)/2; 
    Node *root = newNode(arr[mid]); 
    root->left = sortedArrayToBST(arr, start, mid - 1); 
    root->right = sortedArrayToBST(arr, mid + 1, end); 
  
    return root; 
} 