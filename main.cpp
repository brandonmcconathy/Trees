#include <iostream>
#include <vector>
#include "binaryTree.h"
#include "printList.h"

static void traverse(std::vector<int>& list, binaryTree* node) {
    list.push_back(node->val);
    if (node->left) {
        traverse(list, node->left);
    }
    if (node->right) {
        traverse(list, node->right);
    }
}

int main()
{
    binaryTree* tree = new binaryTree(4, new binaryTree(7, new binaryTree(9), new binaryTree(1)), new binaryTree(22));
    
    std::vector<int> list;
    traverse(list, tree);
    printList(list);
}
