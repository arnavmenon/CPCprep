#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool hasPathSum(Node *root, int sum) {
    
    if (root == NULL)
        return (sum == 0);
        
    else
    {
        bool ans = 0;
        
        int subSum = sum - root->data;
        
        if ( subSum == 0 && root->left == NULL && root->right == NULL )
            return 1;
            
        if(root->left)
            ans = ans || hasPathSum(root->left, subSum);
        if(root->right)
            ans = ans || hasPathSum(root->right, subSum);
        
        return ans;
    }
}