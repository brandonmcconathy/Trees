#include "bstInsert.h"
#include "binaryTree.h"

void bstInsert(binaryTree* tree, int val) {
	binaryTree* currNode = tree;
	bool done = false;
	while (!done) {
		if (val <= currNode->val) {
			if (currNode->left == nullptr) {
				currNode->left = new binaryTree(val);
				done = true;
			}
			else {
				currNode = currNode->left;
			}
		}
		else {
			if (currNode->right == nullptr) {
				currNode->right = new binaryTree(val);
				done = true;
			}
			else {
				currNode = currNode->right;
			}
		}
	}
}