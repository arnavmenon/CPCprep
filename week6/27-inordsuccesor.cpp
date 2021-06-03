#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* minValue( Node* node)
{
    Node* current = node;
    
    while (current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

Node* inOrderSuccessor( Node* root, Node* n)
{
        
    
    if (n->right != NULL)
        return minValue(n->right);
    
    Node* succ = NULL;
    
    
    
    while (root != NULL)
    {
        if (n->data < root->data)
        {
            succ = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
            break;
    }
    
    return succ;
}
     
   
    