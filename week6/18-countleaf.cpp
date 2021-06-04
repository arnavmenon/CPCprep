#include <bits/stdc++.h>
#include <vector>
using namespace std;

int countLeaves(Node* root)
{
    if(root==nullptr)
        return 0;
    
    if(root->left==nullptr && root->right==nullptr)
        return 1;
        
    else 
        return (countLeaves(root->left) + countLeaves(root->right));
    

}