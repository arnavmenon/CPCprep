#include <bits/stdc++.h>
#include <vector>
using namespace std;


Node *copyList(Node *head) {
    Node* cur = head;
    Node* ans;

    while (cur!=NULL){

        ans = cur->next;
        cur->next = new Node(cur->data);
        cur->next->next = ans;
        cur = ans;
    }
  
    cur = head;

    while (cur!=NULL){

        if(cur->next!=NULL){

            if(cur->arb!=NULL)
                cur->next->arb=cur->arb->next;
            else
                cur->next->arb=cur->arb;
        }
        
        if(cur->next!=NULL)
            cur=cur->next->next;
        else
            cur=cur->next;
    }
  
    Node* start = head;
    Node* t = head->next;

    ans = t;

    while (start!=NULL && t!=NULL){

        if(start->next!=NULL)
            start->next =start->next->next;

        if(t->next!=NULL)
            t->next=t->next->next;
            
        start = start->next;
        t = t->next;
    }
  
    return ans;
}