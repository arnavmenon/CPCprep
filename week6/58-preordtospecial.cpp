#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct node *_constructTree(int pre[], char preLN[], int *index_ptr, int n)
{
    int index = *index_ptr; 
   
    if (index == n)
        return nullptr;
  

    struct node *temp = newNode (pre[index]);
    (*index_ptr)++;
  
    
    if (preLN[index] == 'N')
    {
      temp->left  = _constructTree(pre, preLN, index_ptr, n);
      temp->right = _constructTree(pre, preLN, index_ptr, n);
    }
  
    return temp;
}
  

struct node *constructTree(int pre[], char preLN[], int n)
{
    int index = 0;
    return _constructTree (pre, preLN, &index, n);
}