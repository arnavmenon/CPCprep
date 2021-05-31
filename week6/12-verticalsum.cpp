#include <bits/stdc++.h>
#include <vector>
using namespace std;

void calcDeviation(Node *node, int dev, map<int, int> &Map)
{
    if (node == nullptr) 
        return;
    
    calcDeviation(node->left, dev-1, Map);
    Map[dev]+=node->data;
    calcDeviation(node->right, dev+1, Map);
    
}

vector <int> verticalSum(Node *root) {
    
    map<int,int> Map;
    vector<int> ans;

    calcDeviation(root, 0, Map);
    
    for (auto it = Map.begin(); it != Map.end(); ++it)
    {
        ans.push_back(it->second);
    }
    
    return ans;
}