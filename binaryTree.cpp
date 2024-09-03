#include "binaryTree.h"

binaryTree::binaryTree(int val) {
	this->val = val;
	this->left = nullptr;
	this->right = nullptr;
}

binaryTree::binaryTree(int val, binaryTree* left) {
	this->val = val;
	this->left = left;
	this->right = nullptr;
}

binaryTree::binaryTree(int val, binaryTree* left, binaryTree* right) {
	this->val = val;
	this->left = left;
	this->right = right;
}