#include <bits/stdc++.h>
#include <vector>
using namespace std;

void mirror(Node* node){
    
    if (node == nullptr) 
        return; 
        
    else
    {
        struct Node* temp;
        mirror(node->left);
        mirror(node->right);
        
        temp=node->left;
        node->left=node->right;
        node->right=temp;
    }
}