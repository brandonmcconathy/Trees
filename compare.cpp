#include "compare.h"
#include "binaryTree.h"

bool compare(binaryTree* a, binaryTree* b) {
	if (a == nullptr && b == nullptr) {
		return true;
	}
	if (a == nullptr || b == nullptr) {
		return false;
	}
	if (a->val != b->val) {
		return false;
	}
	return compare(a->left, b->left) && compare(a->right, b->right);
}