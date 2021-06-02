#include <bits/stdc++.h>
#include <vector>
using namespace std;

void doubleTree(node* root)  //postorder whenever we add smth after a set of nodes
{ 
    node* temp; 
      
    if (root == nullptr) 
        return; 
      
    doubleTree(root->left); 
    doubleTree(root->right); 
      
    temp = root->left; 
    root->left = newNode(root->data); 
    root->left->left = temp; 
} 