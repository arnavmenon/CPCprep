#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isVowel(char x)
{
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
}


struct Node* arrange(Node *head)
{
   if (head == NULL)
        return NULL;
   
   Node *final = head;
   Node *last_v;
   Node *cur = head;
    
 
    if (isVowel(head->data))
        last_v = head;
 
    else
    {
        while (cur->next != NULL &&
               !isVowel(cur->next->data))
            cur = cur->next;
 

        if (cur->next == NULL)
            return head;
 
        last_v = final = cur->next;
        cur->next = cur->next->next;
        last_v->next = head;
    }

    while (cur != NULL && cur->next != NULL)
    {
        if (isVowel(cur->next->data))
        {
            if (cur == last_v)
                last_v = cur = cur->next;
            
            else
            {
                Node *temp = last_v->next;
 
                last_v->next = cur->next;
                last_v = last_v->next;
 
                cur->next = cur->next->next;
 
                last_v->next = temp;
            }
        }

        else
            cur = cur->next;  
    }

    return final;
}