#include <bits/stdc++.h>
#include <vector>
using namespace std;

// (node->data == ls + rs) && isSumTree(node->left) && isSumTree(node->right) method is On^2 worst case
//this ones O(n)


int isLeaf(Node* node)
{
    if(node == nullptr)
        return 0;

    if(node->left == nullptr && node->right == nullptr)
        return 1;

    return 0;
}
    

bool isSumTree(Node* node)
{
    int ls; 
    int rs; 
    
    if(node == nullptr || isLeaf(node))
        return 1;
    
    if( isSumTree(node->left) && isSumTree(node->right))
    {       
        if(node->left == nullptr)
            ls = 0;
        else if(isLeaf(node->left))
            ls = node->left->data;
        else
            ls = 2*(node->left->data);
    
        
        if(node->right == nullptr)
            rs = 0;
        else if(isLeaf(node->right))
            rs = node->right->data;
        else
            rs = 2 * (node->right->data);
    
        return(node->data == ls + rs);
    }
    
    return 0;
}