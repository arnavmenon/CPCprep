#include <bits/stdc++.h>
#include <vector>
using namespace std;

void deleteAlt(Node *head)
{
    if (head == NULL)
        return;
 
    Node *t = head->next;
 
    if (t == NULL)
        return;
 
    head->next = t->next;
 
    free(t);
    deleteAlt(head->next);
}