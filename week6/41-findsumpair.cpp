#include <bits/stdc++.h>
#include <vector>
using namespace std;

//inorder then 2ptr takes O(n) space

//to do in O(logn) space, directly do the 2ptr in modified tree in dll repr

int isPairPresent(struct Node *root, int target)
{
    stack<Node*> s1,s2;
    Node *inc = root;
    Node *dec = root;
    
    while (true){
    
        if (inc)
        {
            s1.push(inc);
            inc = inc->left;
        }
    
        else if (dec){
            s2.push(dec);
            dec = dec->right;
        }
    
        else if (s1.size() && s2.size()){

            inc = s1.top();
            dec = s2.top();

            if (inc->data > dec->data)
                return false;

            if (inc == dec)
                return false;

            if (inc->data + dec->data == target)
                return true;

            else if (inc->data + dec->data < target) 
            {
                inc = inc->right;
                s1.pop();
                dec = NULL; 
            }

            else if (inc->data + dec->data > target)
            {
                dec = dec->left;
                s2.pop();
                inc = NULL; 
            }
        }
        
        else
            return false;
    }
}