#include <bits/stdc++.h>
#include <vector>
using namespace std;

int _toSumTree(Node* node){
    
    if(node == nullptr) 
        return 0; 
        
    int temp=node->data; 
    node->data=_toSumTree(node->left)+_toSumTree(node->right); 

    return (temp + node->data); 
}

void toSumTree(Node *node)
{
    int x=_toSumTree(node);
}