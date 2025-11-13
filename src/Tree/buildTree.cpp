#include <iostream>
#include <vector>
#include <queue>
#include "../../include/Node.hpp"
#include "../../include/levelOrder.hpp"

using namespace std;


static int idx = -1;
Node* buildTree(vector<int> preOrder) {
    idx++;
    if (idx >= preOrder.size() || preOrder[idx] == -1)
        return NULL;

    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;

};

