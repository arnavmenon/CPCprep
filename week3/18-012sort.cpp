#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* segregate(Node *head) {
        
    int ctr[3] = {0, 0, 0};
    int i=0;
    Node *temp = head; 
    
    while (temp != NULL) 
    { 
        ctr[temp->data]++; 
        temp = temp->next; 
    } 
    
    temp = head; 

    while (temp != NULL) 
    { 
        if (ctr[i] == 0) 
            i++; 
        else
        { 
            temp->data = i; 
            ctr[i]--; 
            temp = temp->next; 
        } 
    } 
    
    return head;
    
}