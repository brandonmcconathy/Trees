#include "bstDelete.h"
#include "binaryTree.h"

void bstDelete(binaryTree* tree, int val) {
	binaryTree* currNode = tree;
	binaryTree* prevNode;

	// Puts currNode on node we need to delete and prevNode on node before
	while (currNode->val != val) {
		if (val <= currNode->val) {
			if (currNode->left) {
				prevNode = currNode;
				currNode = currNode->left;
			}
			else {
				return;
			}
		}
		else {
			if (currNode->right) {
				prevNode = currNode;
				currNode = currNode->right;
			}
			else {
				return;
			}
		}
	}

	// Case where currNode has no children
	if (currNode->left == nullptr && currNode->right == nullptr) {
		if (prevNode->left->val == val) {
			prevNode->left = nullptr;
		}
		else {
			prevNode->right = nullptr;
		}
		return;
	}

	// Cases where currNode has 1 child
	if (currNode->left == nullptr) {
		if (prevNode->left == currNode) {
			prevNode->left = currNode->left;
		}
		else {
			prevNode->right = currNode->left;
		}
		return;
	}
	else if (currNode->right == nullptr) {
		if (prevNode->left == currNode) {
			prevNode->left = currNode->right;
		}
		else {
			prevNode->right = currNode->right;
		}
		return;
	}


	return;
}