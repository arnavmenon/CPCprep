#include <bits/stdc++.h>
#include <vector>
using namespace std;

void _addGreater(struct node *root, int *sum_ptr)
{
    if (root == nullptr)
        return;
 
    _addGreater(root->right, sum_ptr);
    
    *sum_ptr = *sum_ptr + root->key; 
    root->key = *sum_ptr;
    
    _addGreater(root->left, sum_ptr);
}
 

void addGreater(struct node *root)
{
    int sum = 0;
    _addGreater(root, &sum);
}