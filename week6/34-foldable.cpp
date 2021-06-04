#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool _isFoldable(Node* n1, Node* n2)
{
   
    if (n1 == nullptr && n2 == nullptr) 
        return true;

    if (n1 == nullptr || n2 == nullptr) 
        return false;
    
    return( _isFoldable(n1->left, n2->right) && _isFoldable(n1->right, n2->left));
}

bool IsFoldable(Node* root)
{
    if (root == nullptr)
        return true;
 
    return _isFoldable(root->left, root->right);
}