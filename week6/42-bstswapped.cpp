#include <bits/stdc++.h>
#include <vector>
using namespace std;

void _correctBST( struct Node* root, struct Node** first, struct Node** middle, struct Node** last, struct Node** prev )
{
    if( root )
    {
        _correctBST( root->left, first, middle, last, prev );
 
        if (*prev && root->data < (*prev)->data)
        {
            if ( !*first )
            {
                *first = *prev;
                *middle = root;
            }
           else
                *last = root;
        }
 
        *prev = root;
        _correctBST( root->right, first, middle, last, prev );
    }
}
 


void correctBST( struct Node* root )
{
    
    struct node *first, *middle, *last, *prev;
    first = middle = last = prev = NULL;
 
    _correctBST( root, &first, &middle, &last, &prev );
 
    if( first && last )
        swap( &(first->data), &(last->data) );
    else if( first && middle ) 
        swap( &(first->data), &(middle->data) );
   
}