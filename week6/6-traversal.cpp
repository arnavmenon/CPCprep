#include <bits/stdc++.h>
#include <vector>
using namespace std;

//preorder
vector <int> preorder(Node* root)
{
    if(root == nullptr)
        return {-1};
    
    stack<Node*> s;
    vector<int> ans;
    s.push(root);
    
    while(!s.empty()){
        struct Node* temp=s.top();
        ans.push_back(temp->data);
        s.pop();
        
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
    
    return ans;

}

void inorder(struct Node* node)
{
    if (node == nullptr)
        return;
 
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void preorder(struct Node* node)
{
    if (node == nullptr)
        return;
 
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Node* node)
{
    if (node == nullptr)
        return;
 
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}