#include <bits/stdc++.h>
#include <vector>
using namespace std;
  

node * revAltK(node *Node, int k, bool rot) 
{ 
    if(Node == NULL) 
        return NULL; 
      
    int count = 1; 
    node *prev = NULL; 
    node *current = Node; 
    node *next; 
      

    while(current != NULL && count <= k) 
    { 
        next = current->next; 
      
        if(rot == true) 
            current->next = prev; 
                  
        prev = current; 
        current = next; 
        count++; 
    } 

    if(rot == true) 
    { 
        Node->next = revAltK(current, k, !rot); 
        return prev;         
    } 
          
    else
    { 
        prev->next = revAltK(current, k, !rot); 
        return Node;     
    } 
} 

node* fncaller(node *head, int k) 
{ 
    return revAltK(head, k, true); 
} 