#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
void removeLoop(struct Node* loop_node, struct Node* head)
{
    struct Node* a = loop_node;
    struct Node* b = loop_node;
 
    int count = 1, i;

    while (a->next != b) {
        a = a->next;
        count++;
    }
 
    a = head;
    b = head;

    for (i = 0; i < count; i++)
        b = b->next;
 
    while (b != a) {
        a = a->next;
        b = b->next;
    }
 
    while (b->next != a)
        b = b->next;

    b->next = NULL;
}

int detectAndRemoveLoop(struct Node* list)
{
    struct Node *slow = list;
    struct Node *fast = list;
 
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
 
        if (slow == fast) {
            removeLoop(slow, list);
            return 1;
        }
    }
 
    return 0;
}