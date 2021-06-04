#include <bits/stdc++.h>
#include <vector>
using namespace std;

void deleteLL(Node** head)
{
    Node* cur = *head;
    Node* t = NULL;
 
    while (cur!=NULL)
    {
        t = cur->next;
        free(cur);
        cur = t;
    }

    *head = NULL;
}