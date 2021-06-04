#include <bits/stdc++.h>
#include <vector>
using namespace std;

// hash method, insert addresses (directly insert head ptr)

// changing ll pointer method

bool detectLoop(Node* head)
{
    Node* temp = new Node(0);

    if(head==NULL)
        return false;

    while (head != NULL) {
      
        if (head->next==temp) {
            return true;
        }
        if (head->next==NULL) {
            return false;
        }  
    
        Node* t=head->next;
        head->next=temp;
        head=t;
    }
    
    return false;
}

// floyds loop finding algo, 2ptr method

bool detectLoop(Node* head)
{
    Node *slow = head;
    Node *fast = head;

    while (slow && fast && fast->next) {
        
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) 
            return true;
    }

    return false;
}

