#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool checkLevelrecur(struct Node *root, int level, int *leafLevel)
{
    if (root == nullptr) 
        return true;
    
    if (root->left == nullptr && root->right == nullptr)
    {

        if (*leafLevel == 0)
        {
            *leafLevel = level;
            return true;            //find first leaf
        }
    
        return (level == *leafLevel);   //compare with first leaf
    }

    return checkLevelrecur(root->left, level + 1, leafLevel) && checkLevelrecur(root->right, level + 1, leafLevel);
}

bool check(Node *root)
{
    int leafLevel = 0;
    return checkLevelrecur(root, 0, &leafLevel);
}