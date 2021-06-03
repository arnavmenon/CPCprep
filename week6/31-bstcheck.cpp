#include <bits/stdc++.h>
#include <vector>
using namespace std;

//M1

bool isBST(Node* root, Node* l=nullptr, Node* r=nullptr)
{
    
    if (root == nullptr)
        return true;
 
    if (l != nullptr && root->data <= l->data)
        return false;
    
    if (r != nullptr && root->data >= r->data)
        return false;
 
    return isBST(root->left, l, root) && isBST(root->right, root, r);
}

//M2

bool _isBST(struct Node* root, Node* &prev)
{

    if (root)
    {
        if (!_isBST(root->left, prev))
            return false;
    
        if (prev != nullptr && root->data <= prev->data)
            return false;
    
        prev = root;
    
        return _isBST(root->right, prev);
    }
    
    return true;
}
    
bool isBST(Node *root)
{
    Node *prev = nullptr;
    return _isBST(root, prev);
}