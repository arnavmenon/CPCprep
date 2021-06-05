#include <bits/stdc++.h>
#include <vector>
using namespace std;

// same as 53 basically 

int countNodes(Node *head) 
{ 
    int count = 0; 

    Node *temp = head; 
    while(temp!=nullptr) 
    { 
        temp = temp->next; 
        count++; 
    } 

    return count; 
} 

Node* _sortedListToBST(Node **head_ref, int n) 
{  
    if (n <= 0) 
        return nullptr; 

    Node *left = _sortedListToBST(head_ref, n/2); 
    Node *root = newNode((*head_ref)->data); 
    root->left = left; 
    *head_ref = (*head_ref)->next;  
    root->right = _sortedListToBST(head_ref, n - n / 2 - 1);
  
    return root; 
} 

  
Node* sortedListToBST(Node *head) 
{  
    int n = countNodes(head);    
    return _sortedListToBST(&head, n); 
} 
