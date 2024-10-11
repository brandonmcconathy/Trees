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

// BST
#include "bstInsert.h"
#include "bstDelete.h"

// Heap
#include "minHeap.h"
#include "maxHeap.h"

// Tire
#include "trie.h"

// Other
#include "compare.h"


int main()
{
    binaryTree* tree = new binaryTree(4, new binaryTree(7, new binaryTree(9), new binaryTree(1)), new binaryTree(22, nullptr, new binaryTree(17)));
    
    // Traversals
    std::cout << "Traversals\n" << std::endl;

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


    std::cout << "\n-----------------------------------------\n" << std::endl;


    // Search
    std::cout << "Search\n" << std::endl;

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


    std::cout << "\n-----------------------------------------\n" << std::endl;


    // Compare
    std::cout << "Compare\n" << std::endl;
    std::cout << "Same: " << compare(tree, tree) << std::endl;


    std::cout << "\n-----------------------------------------\n" << std::endl;


    // BST
    std::cout << "Binary Search Tree\n" << std::endl;

    binaryTree* bst = new binaryTree(22);

    bstInsert(bst, 10);
    bstInsert(bst, 27);
    bstInsert(bst, 2);
    bstInsert(bst, 63);
    bstInsert(bst, 22);
    bstInsert(bst, 23);
    list = {};
    preTraverse(list, bst);
    printList(list);


    std::cout << "\n-----------------------------------------\n" << std::endl;


    // MinHeap
    std::cout << "Heap\n" << std::endl;

    MinHeap minHeap;

    minHeap.add(10);
    minHeap.add(12);
    minHeap.add(2);
    minHeap.add(1);
    minHeap.add(15);
    minHeap.add(5);
    
    std::cout << "MinHeap:" << std::endl;
    minHeap.printList();

    minHeap.pop();

    minHeap.printList();

    minHeap.add(1);
    minHeap.add(10);
    minHeap.add(12);

    minHeap.printList();
    std::cout << std::endl;

    MaxHeap maxHeap;

    maxHeap.add(10);
    maxHeap.add(12);
    maxHeap.add(2);
    maxHeap.add(1);
    maxHeap.add(15);
    maxHeap.add(5);

    std::cout << "MaxHeap:" << std::endl;
    maxHeap.printList();

    maxHeap.pop();

    maxHeap.printList();

    maxHeap.add(1);
    maxHeap.add(10);
    maxHeap.add(12);

    maxHeap.printList();


    std::cout << "\n-----------------------------------------\n" << std::endl;


    // Trie
    std::cout << "Trie\n" << std::endl;

    Trie trie;

    trie.add("apple");
    trie.add("banana");
    trie.add("zebra");
    trie.add("app");
    trie.add("ear");
    trie.add("earring");
    trie.add("elephant");

    trie.printWords();

    return 0;

}
