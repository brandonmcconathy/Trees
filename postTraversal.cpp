#include "postTraversal.h"
#include "binaryTree.h"
#include <vector>

static void traverse(std::vector<int>& list, binaryTree* node) {
	if (node->left) {
		traverse(list, node->left);
	}
	if (node->right) {
		traverse(list, node->right);
	}
	list.push_back(node->val);
}

void postTraverse(std::vector<int>& list, binaryTree* root) {
	if (root == NULL) {
		return;
	}
	traverse(list, root);
}