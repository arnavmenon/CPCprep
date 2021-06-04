#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool _Ancestors(struct Node *root, int target, vector<int> &ans){

    if (root == nullptr)
        return false;
    
        if (root->data == target)
            return true;

        if ( _Ancestors(root->left, target,ans) || _Ancestors(root->right, target,ans) )
        {
            ans.push_back(root->data);
            return true;
        }
        
        return false;
}

vector<int> Ancestors(struct Node *root, int target)
{
    
    vector<int> ans; 
    _Ancestors(root,target,ans);
    return ans;
}