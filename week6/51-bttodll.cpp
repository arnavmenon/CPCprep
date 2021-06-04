#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* _bToDLL(Node* root, Node** head, Node** tail)
{
    if (root == nullptr)
        return nullptr;
    
    Node* l = root->l;
    Node* r = root->r;
    
    _bToDLL(root->l, head, tail);
    
    if (*head == nullptr) {
        *head = root;
    }
    
    root->l = *tail;
    
    if (*tail != nullptr) {
        (*tail)->r = root;
    }
    
    *tail = root;
    
    _bToDLL(root->r, head, tail);
    
    return root;
}

Node * bToDLL(Node *root)
{
    if (root == nullptr)
        return root;
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    _bToDLL(root, &head, &tail);
    
    return head;
}