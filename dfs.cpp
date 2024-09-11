#include "dfs.h"
#include "binaryTree.h"

static void traverse(binaryTree* node, int val, bool* ansptr) {
	if (node->val == val) {
		*ansptr = true;
	}
	if (node->left) {
		traverse(node->left, val, ansptr);
	}
	if (node->right) {
		traverse(node->right, val, ansptr);
	}
}

bool dfs(binaryTree* tree, int val) {
	bool ans = false;
	bool* ansptr = &ans;
	traverse(tree, val, ansptr);
	return ans;
}