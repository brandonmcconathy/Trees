#include "bfs.h"
#include "binaryTree.h"
#include <queue>

bool bfs(binaryTree* tree, int val) {
	std::queue<binaryTree*> q;
	q.push(tree);

	while (!q.empty()) {
		binaryTree* curr = q.front();
		q.pop();
		if (curr->val == val) {
			return true;
		}
		if (curr->left) {
			q.push(curr->left);
		}
		if (curr->right) {
			q.push(curr->right);
		}
	}


	return false;
}