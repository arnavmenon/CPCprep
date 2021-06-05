#include <bits/stdc++.h>
#include <vector>
using namespace std;

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
    Node *root = *head_ref;   
    root->prev = left; 
    *head_ref = (*head_ref)->next;  
    root->next = _sortedListToBST(head_ref, n- n/2 -1); 
  
    return root; 
} 

  
Node* sortedListToBST(Node *head) 
{  
    int n = countNodes(head);    
    return _sortedListToBST(&head, n); 
} 
