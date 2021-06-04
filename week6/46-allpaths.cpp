#include <bits/stdc++.h>
#include <vector>
using namespace std;

void helper(Node* root,vector<int> arr,vector<vector<int>> &ans)
{
    if(!root)
        return;
    
    arr.push_back(root->data);
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(arr);
        return;
    }
   
    helper(root->left,arr,ans);
    helper(root->right,arr,ans);
}
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> ans;
   
    if(!root)
        return ans;
        
    vector<int> arr;
   
    helper(root,arr,ans);
   
    return ans;
}

