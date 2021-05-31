#include <bits/stdc++.h>
#include <vector>
using namespace std;

void _KDistant(struct Node *root, int k, vector<int> &ans)
{
    if(root == NULL|| k < 0 )
        return;
    if( k == 0 )
    {
        ans.push_back(root->data);
        return;
    }
    
    _KDistant( root->left, k - 1, ans ) ;
    _KDistant( root->right, k - 1, ans ) ;
}

vector<int> Kdistance(struct Node *root, int k){
    
    vector<int> ans;
    _KDistant(root,k,ans);
    
    return ans;
}