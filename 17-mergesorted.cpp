#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* ans = NULL; 
      
    if (head1== NULL) 
        return(head2); 

    else if (head2 == NULL) 
        return(head1); 
      
    if (head1->data <= head2->data) 
    { 
        ans = head1; 
        ans->next = sortedMerge(head1->next, head2); 
    } 

    else
    { 
        ans = b; 
        ans->next = sortedMerge(head1, head2->next); 
    } 

    return ans; 
}  