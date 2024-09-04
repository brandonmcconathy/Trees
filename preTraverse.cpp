#include "preTraversal.h"
#include "binaryTree.h"
#include <vector>

static void traverse(std::vector<int>& list, binaryTree* node) {
	list.push_back(node->val);
	if (node->left) {
		traverse(list, node->left);
	}
	if (node->right) {
		traverse(list, node->right);
	}
}

void preTraverse(std::vector<int>& list, binaryTree* root) {
	if (root == NULL) {
		return;
	}
	traverse(list, root);
}