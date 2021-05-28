#include <bits/stdc++.h>
#include <vector>
using namespace std;

int height(struct Node* node){
    if(node == nullptr)
        return 0;
        
    else
        return (1 + max(height(node->left), height(node->right)));
}