#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isIdentical(Node *r1, Node *r2)
{
    if(r1==nullptr && r2==nullptr)
        return 1;
        
    if(r1!=nullptr && r2!=nullptr)
        return( (r1->data==r2->data) && isIdentical(r1->right,r2->right) && isIdentical(r1->left,r2->left) );
        

    return 0;
}