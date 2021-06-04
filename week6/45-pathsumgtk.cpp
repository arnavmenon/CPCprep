#include <bits/stdc++.h>
#include <vector>
using namespace std;


struct Node *prune(struct Node *root, int sum)
{ 
    if (root == nullptr) 
        return nullptr;
    
    root->left = prune(root->left, sum - root->data);
    root->right = prune(root->right, sum - root->data);
  
    if (root->left==nullptr && root->right==nullptr)
    {
        if (root->data < sum)
        {
            free(root);
            return nullptr;
        }
    }
  
    return root;
}