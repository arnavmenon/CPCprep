#include <bits/stdc++.h>
#include <vector>
using namespace std;

void _modify(Node* root, int* tba){ //reverse inorder
    
    if(root==nullptr)
        return;
        
    _modify(root->right,tba);
    
    *tba+=root->data;
    root->data=*tba;
    
    _modify(root->left,tba);
    
}

Node* modify(Node *root)
{
    int tba=0;
    
    _modify(root, &tba);
    
    return root;
}