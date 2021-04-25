#include <bits/stdc++.h>
#include <vector>
using namespace std;


void mergeList(struct Node **p, struct Node **q)
{
    Node *p_cur = *p;
    Node *q_cur = *q; 
    Node *p_next;
    Node *q_next; 
    
    while (p_cur != NULL && q_cur != NULL) 
    { 
        p_next = p_cur->next; 
        q_next = q_cur->next; 
        
        q_cur->next = p_next; 
        p_cur->next = q_cur;
        
        p_cur = p_next; 
        q_cur = q_next; 
    } 
    
    *q = q_cur; 
}