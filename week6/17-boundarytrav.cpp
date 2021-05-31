#include <bits/stdc++.h>
#include <vector>
using namespace std;

void leaves(struct Node* root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    
    leaves(root->left,ans);
    
    if (!root->left && !root->right)
        ans.push_back(root->data);
    
    leaves(root->right,ans);
}
    

void leftTD(struct Node* root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    
    if (root->left) {
    
        ans.push_back(root->data);
        leftTD(root->left,ans);
    }

    else if (root->right) {
        ans.push_back(root->data);
        leftTD(root->right,ans);
    }

}


void rightBU(struct Node* root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    
    if (root->right) {

        rightBU(root->right,ans);
        ans.push_back(root->data);
    }
    else if (root->left) {
        rightBU(root->left,ans);
        ans.push_back(root->data);
    }

}
    
vector<int> printBoundary(struct Node* root)
{
    if (root == nullptr)
        return {-1};

    vector<int> ans;
    
    ans.push_back(root->data);
    
    leftTD(root->left,ans);
    
    leaves(root->left,ans);
    leaves(root->right,ans);
    
    rightBU(root->right,ans);
    
    return ans;
}