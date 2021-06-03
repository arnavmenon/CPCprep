#include <bits/stdc++.h>
#include <vector>
using namespace std;

// checking height of l and r them comparing is On2
// this is On

bool _isBalanced(Node *root, int* height)
{
    int lh = 0, rh = 0;
    int l = 0, r = 0;
    
    if (root == nullptr) {
        *height = 0;
        return 1;
    }
    
    l = _isBalanced(root->left, &lh);
    r = _isBalanced(root->right, &rh);
    
    *height = (lh > rh ? lh : rh) + 1;
    
    if (abs(lh - rh) >= 2)
        return 0;
    else
        return (l && r);
}

bool isBalanced(Node* root){
    
    int height=0;
    return _isBalanced(root, &height);
}