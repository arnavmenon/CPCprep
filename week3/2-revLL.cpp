#include <bits/stdc++.h>
#include <vector>
using namespace std;

// recursive

struct Node* reverseList(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node* rem = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return rem;
}

// stack method also possible

void reverseList(Node** head)
{  
     
    stack<Node*> s;
    Node* t = *head;

    while (t->next != NULL)
    {
        s.push(t);
        t = t->next;
    }

    *head = t;
   
    while (!s.empty())
    {
        t->next = s.top();
        s.pop();
        t = t->next;
    }

    t->next = NULL;
}