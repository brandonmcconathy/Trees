#include "bstDelete.h"
#include "binaryTree.h"

void bstDelete(binaryTree* tree, int val) {
	if (tree == nullptr) {
		return;
	}

	binaryTree* currNode = tree;
	binaryTree* prevNode = nullptr;

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

	// Cases where currNode is root
	if (prevNode == nullptr) {
		// Case of no children
		if (currNode->left == nullptr && currNode->right == nullptr) {
			tree = nullptr;
			return;
		}

		// Cases of 1 child
		else if (currNode->left == nullptr) {
			tree = tree->right;
			return;
		}
		else if (currNode->right == nullptr) {
			tree = tree->left;
			return;
		}

		// Case of 2 children
		else {
			binaryTree* prev = tree;
			binaryTree* curr = tree->left;
			while (curr->right) {
				prev = curr;
				curr = curr->right;
			}
			tree->val = curr->val;

			if (prev == tree) {
				tree->left = tree->left->left;
			}
			else {
				prev->right = nullptr;
			}

			return;
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

	// Case of 2 children
	binaryTree* prev = currNode;
	binaryTree* curr = currNode->left;

	while (curr->right) {
		prev = curr;
		curr = curr->right;
	}
	currNode->val = curr->val;

	if (prev == currNode) {
		currNode->left = currNode->left->left;
	}
	else {
		prev->right = nullptr;
	}

	return;
}