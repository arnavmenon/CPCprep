#include <bits/stdc++.h>
#include <vector>
using namespace std;


void linkdelete(struct Node  *head, int M, int N)
{
    Node *cur = head, 
    Node *t; 

    int count; 

    while (cur) 
    { 
        for (count = 1; (count < M && cur!= NULL); count++) 
            cur = cur->next; 
    
        if (cur == NULL) 
            return; 
    
        t = cur->next; 

        for (count = 1; count<=N && t!= NULL; count++) 
        { 
            Node *temp = t; 
            t = t->next; 
            free(temp); 
        } 
            
        cur->next = t; 
        cur = t; 
    }   
}