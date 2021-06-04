#include <bits/stdc++.h>
#include <vector>
using namespace std;

void alternatingSplitList(struct Node* head) 
{
    Node *cur = head;
    Node *a1, *b1;
    
    int pos = 1;

    while(cur != NULL){
        
        if(pos%2){

            if(a == NULL)
                a = a1 = cur;
            
            else{
                a1->next = cur;
                a1 = cur;
            }
        }

        else{

            if(b == NULL)
                b = b1 = cur;
            
            else{
                b1->next = cur;
                b1 = cur;
            }
        }

        pos++;
        cur=cur->next;
    }
    
    if(a != NULL)
        a1->next = NULL;
    
    if(b != NULL)
        b1->next = NULL;
    
}