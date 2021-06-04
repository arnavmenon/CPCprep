#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* removeOutsideRange(Node *root, int min, int max)
{
   
   if (root == nullptr)
      return nullptr;
 
   root->left =  removeOutsideRange(root->left, min, max);
   root->right =  removeOutsideRange(root->right, min, max);
 
   if (root->key < min)
   {
       node *temp = root->right;
       delete root;
       return temp;
   }
   
   if (root->key > max)
   {
       node *temp = root->left;
       delete root;
       return temp;
   }
   
   return root;
}