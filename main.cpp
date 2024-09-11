#include <iostream>
#include <vector>
#include "binaryTree.h"
#include "printList.h"

// Traversals
#include "preTraversal.h"
#include "inTraversal.h"
#include "postTraversal.h"

// Search
#include "bfs.h"
#include "dfs.h"

int main()
{
    binaryTree* tree = new binaryTree(4, new binaryTree(7, new binaryTree(9), new binaryTree(1)), new binaryTree(22, nullptr, new binaryTree(17)));
    
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
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << std::endl;


    // Search
    std::cout << "Search" << std::endl;
    std::cout << std::endl;

    // BFS
    std::cout << "BFS: " << std::endl;
    std::cout << "val: 7 " << "found: " << bfs(tree, 7) << std::endl;
    std::cout << "val: 12 " << "found: " << bfs(tree, 12) << std::endl;
    std::cout << "val: 4 " << "found: " << bfs(tree, 4) << std::endl;
    std::cout << "val: 22 " << "found: " << bfs(tree, 22) << std::endl;
    std::cout << std::endl;

    // DFS
    std::cout << "DFS: " << std::endl;
    std::cout << "val: 7 " << "found: " << dfs(tree, 7) << std::endl;
    std::cout << "val: 12 " << "found: " << dfs(tree, 12) << std::endl;
    std::cout << "val: 4 " << "found: " << dfs(tree, 4) << std::endl;
    std::cout << "val: 22 " << "found: " << dfs(tree, 22) << std::endl;
}
