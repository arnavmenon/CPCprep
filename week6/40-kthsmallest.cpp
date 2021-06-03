#include <bits/stdc++.h>
#include <vector>
using namespace std;

//inorder then count k is o(n)

//this is o(h), kinda like bsearch where we liminate certain range in each iteration

//lcount is a struct variable that stores no of memebers in left subtree

Node* kthSmallest(Node* root, int k)
{
    if (root == nullptr)
        return nullptr;
 
    int count = root->lCount + 1;

    if (count == k)
        return root;
 
    if (count > k)
        return kthSmallest(root->left, k);
 
    return kthSmallest(root->right, k - count);
}