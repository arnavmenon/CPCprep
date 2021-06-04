#include <bits/stdc++.h>
#include <vector>
using namespace std;


Node *swapkthnode(Node* head, int num, int K)
{
    int d=K;
    
    Node* p1=head;
    Node* p2=head;
    Node* t=head;
    
    Node *p1_prev, *p2_prev;
    
    while(d>0){
        p1=p1->next;
        d--;
        
        if(d==1)
            p1_prev=p1;
    }
    
    d=0;
    
    while(t!=NULL){
        if(d!=K-1){
            t=t->next;
            d++;
        }
        else{
            t=t->next;
            p2_prev=p2;
            p2=p2->next;
        }
    }
    
    Node *t1=p1;
    p1->next=p2->next;
    p1=p2;
    p2->next=t1->next;
    p2=t1;
    
    p1_prev->next=p1;
    p2_prev->next=p2;
    
    
    return head;
        
}