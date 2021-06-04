#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* rotate(Node* head, int k)
{
    if (k == 0)
        return NULL;

    Node* t = head;
    
    while (t->next != NULL)
        t = t->next;
    
    t->next = head;
    t = head;
    
    for (int i = 0; i < k - 1; i++)
        t = t->next;
    
    head = t->next;
    t->next = NULL;
    
    return head;
}