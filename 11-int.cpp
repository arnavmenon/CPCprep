#include <bits/stdc++.h>
#include <vector>
using namespace std;

Node* findIntersection(Node* a, Node* b)
{
    Node* ans = NULL;
    Node* t = NULL;
    Node* p1 = a;
    Node* p2 = b;
    
    while(p1 && p2){

        if(p1->data == p2->data){

          Node* x = new Node(p1->data);

            if(ans!=NULL)
                t->next = x;
            else 
                ans= x;

            t = x;
            p1 = p1->next;
            p2 = p2->next;
        }

        else if(p1->data < p2->data) 
            p1 = p1->next;
        else 
            p2 = p2->next;
    }

    return ans;
}