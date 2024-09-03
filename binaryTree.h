#pragma once

class binaryTree {
private:

public:
	int val;
	binaryTree* left;
	binaryTree* right;

	binaryTree(int val);
	binaryTree(int val, binaryTree* left);
	binaryTree(int val, binaryTree* right);
	binaryTree(int val, binaryTree* left, binaryTree* right);
};