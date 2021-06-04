#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool printPath(node* root, node* target_leaf)
{  
    if (root == nullptr)
        return false;

    if (root == target_leaf || printPath(root->left, target_leaf) || printPath(root->right, target_leaf)) {
        cout << root->data << " ";
        return true;
    }
  
    return false;
}

void getTargetLeaf(node* Node, int* max_sum_ref, int curr_sum, node** target_leaf_ref)
{
    if (Node == nullptr)
        return;
    
    curr_sum = curr_sum + Node->data;
  
    if (Node->left == nullptr && Node->right == nullptr) {
        if (curr_sum > *max_sum_ref) {
            *max_sum_ref = curr_sum;
            *target_leaf_ref = Node;
        }
    }
  
    getTargetLeaf(Node->left, max_sum_ref, curr_sum, target_leaf_ref);
    getTargetLeaf(Node->right, max_sum_ref, curr_sum,target_leaf_ref);
}


int maxSumPath(node* Node)
{
    
    if (Node == nullptr)
        return 0;
  
    node* target_leaf;
    int max_sum = INT_MIN;
  
    
    getTargetLeaf(Node, &max_sum, 0, &target_leaf);
  
    printPath(Node, target_leaf);
  
    return max_sum; 
}