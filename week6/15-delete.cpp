#include <bits/stdc++.h>
#include <vector>
using namespace std;

// postorder cause children need to be deleted before parents

void deleteTree(node* node) 
{ 
    if (node == nullptr) 
        return; 
  
    deleteTree(node->left); 
    deleteTree(node->right); 
  
    delete node; 
} 
  
void deleteCaller(node** node_ref) //to set the passed ref to null finallly
{ 
    deleteTree(*node_ref); 

    *node_ref = NULL; 
} 
  