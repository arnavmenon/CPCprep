#include <bits/stdc++.h>
#include <vector>
using namespace std;


Node* pairWiseSwap(struct Node* head) 
{
    Node* prev=NULL;
    Node* cur=head;
    Node* next;

    int i=0;

    while(i<2 && cur != NULL){

        next = cur->next;
        cur->next = prev;
        
        prev = cur;
        cur = next;

        i++;
    }

    if (next != NULL)
        head->next = pairWiseSwap(next);

    return prev;
    
}