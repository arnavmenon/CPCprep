#include <bits/stdc++.h>
#include <vector>
using namespace std;


void increment(Node* node, int dif) 
{ 
   
    if(node->left != nullptr) 
    { 
        node->left->data = node->left->data + dif;         
        increment(node->left, dif); 
    } 

    else if (node->right != nullptr) 
    { 
        node->right->data = node->right->data + dif;     
        increment(node->right, dif); 
    } 
} 
  
  
void convertTree(Node* node) 
{ 
    int l = 0, r = 0, dif; 
      
   
    if (node == nullptr || (node->left == nullptr && node->right == nullptr)) 
        return; 
    
    else
    { 
        convertTree(node->left); 
        convertTree(node->right); 
        
        if (node->left != nullptr) 
            l = node->left->data; 
      
       
        if (node->right != nullptr) 
            r = node->right->data; 
      
       
        dif = l + r - node->data; 
         
        if (dif > 0) 
            node->data = node->data + dif; 
         
        if (dif < 0) 
            increment(node, -dif); 
    } 
} 
  
