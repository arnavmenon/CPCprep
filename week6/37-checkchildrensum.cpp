#include <bits/stdc++.h>
#include <vector>
using namespace std;

int checkChildrenSum(Node* root){

    int left = 0, right = 0;   
   
    if(node == nullptr || (node->left == nullptr && node->right == nullptr))
        return 1;

    else
    {
        if(node->left != nullptr)
            left = node->left->data;
      
        if(node->right != nullptr)
            right = node->right->data;
      
        if((node->data == left + right)&& (checkChildrenSum(node->left) &&checkChildrenSum(node->right)) )
            return 1;

        else
            return 0;
    }
}