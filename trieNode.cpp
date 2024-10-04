#include "trieNode.h"
#include <vector>

trieNode::trieNode(char val) {
	this->val = val;
	this->isWord = false;
}

char trieNode::get() {
	return this->val;
}