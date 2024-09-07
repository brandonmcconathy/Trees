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
    
    // Traversals
    std::cout << "Traversals" << std::endl;
    std::cout << std::endl;

    // Preorder
    std::cout << "Preorder: " << std::endl;
    std::vector<int> list;
    preTraverse(list, tree);
    printList(list);
    std::cout << std::endl;

    // Inorder
    std::cout << "Inorder:" << std::endl;
    list = {};
    inTraverse(list, tree);
    printList(list);
    std::cout << std::endl;

    // Postorder
    std::cout << "Postorder:" << std::endl;
    list = {};
    postTraverse(list, tree);
    printList(list);
    std::cout << std::endl;
    std::cout << std::endl;
}
