#include <bits/stdc++.h>
#include <vector>
using namespace std;

// o n^2
int height(struct Node* node){
    if(node == nullptr)
        return 0;
        
    else
        return (1 + max(height(node->left), height(node->right)));
}

int diameter(Node* node)
{
    if(node == nullptr)
        return 0;
        
    else 
        return max( 1+height(node->left)+height(node->right) , max(diameter(node->left) , diameter(node->right)));
}

//O n - calc height in the same recursion

int diameterOpt(struct node* root, int* height)
{
    int lh = 0, rh = 0;
    int ldiameter = 0, rdiameter = 0;
  
    if (root == NULL) {
        *height = 0;
        return 0;
    }
  
    ldiameter = diameterOpt(root->left, &lh);
    rdiameter = diameterOpt(root->right, &rh);
  

    *height = max(lh, rh) + 1;
  
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}