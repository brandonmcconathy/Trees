#include <iostream>
#include <vector>
#include "binaryTree.h"
#include "printList.h"

// Traversals
#include "preTraversal.h"
#include "inTraversal.h"
#include "postTraversal.h"

int main()
{
    binaryTree* tree = new binaryTree(4, new binaryTree(7, new binaryTree(9), new binaryTree(1)), new binaryTree(22));
    
    std::vector<int> list;
    preTraverse(list, tree);
    printList(list);

    list = {};
    inTraverse(list, tree);
    printList(list);

    list = {};
    postTraverse(list, tree);
    printList(list);
}
