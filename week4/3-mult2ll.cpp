#include <bits/stdc++.h>
#include <vector>
using namespace std;


long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long int a1=0,a2=0;

    while(l1!=NULL)
    {
        a1= a1*10 + l1->data;
        a1= a1%1000000007;
        l1= l1->next;
    }

    while(l2!=NULL)
    {
        a2= a2*10 + l2->data;
        a2= a2%1000000007;
        l2= l2->next;
    }

    return ((a1*a2)%1000000007);
}