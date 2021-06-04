#include <bits/stdc++.h>
#include <vector>
using namespace std;

void _printNearNodes(Node *root, int low, int high, vector<int> &ans)
{
    if ( root==nullptr )
        return;
     
    if ( low < root->data )
        _printNearNodes(root->left, low, high,ans);
     
    if ( low <= root->data && high >= root->data )
        ans.push_back(root->data);
      
    if ( high > root->data )
        _printNearNodes(root->right, low, high,ans);
        
}

vector<int> printNearNodes(Node *root, int low, int high){
    
    vector<int> ans;
     _printNearNodes(root,low,high,ans);
     
    return ans;
     
}