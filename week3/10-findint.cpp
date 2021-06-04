#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getIntersection(Node* head1, Node* head2)
{

    int c1=0,c2=0,dif;
    Node* n1=head1;
    Node* n2=head2;

    while (n1 != NULL) {
        c1++;
        n1=n1->next;
    }
    while (n2 != NULL) {
        c2++;
        n2=n2->next;
    }
  
    if (c1 > c2) {
        dif= c1 - c2;
        return findNode(d, head1, head2);
    }

    else {
        dif= c2 - c1;
        return findNode(d, head2, head1);
    }
}
  

int findNode(int dif, Node* head1, Node* head2)
{
    Node* t1 = head1;
    Node* t2 = head2;
  
    for (int i = 0; i < dif; i++) {
        if (t1 == NULL) {
            return -1;
        }
        t1 = t1->next;
    }
  
    while (t1 != NULL && t2 != NULL) {
        if (t1 == t2)
            return t1->data;
  
        t1 = t1->next;
        t2 = t2->next;
    }
  
    return -1;
}
