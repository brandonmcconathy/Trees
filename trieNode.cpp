#include "trieNode.h"
#include <vector>

trieNode::trieNode(char val) {
	this->val = val;
	this->isWord = false;
}

char trieNode::get() {
	return this->val;
}

bool trieNode::checkChildren(char letter) {
	for (trieNode* node : children) {
		if (node->get() == letter) {
			return true;
		}
	}
	return false;
}

trieNode* trieNode::getChild(char letter) {
	for (trieNode* node : children) {
		if (node->get() == letter) {
			return node;
		}
	}
}

bool trieNode::checkWord() {
	return this->isWord;
}

void trieNode::addChild(char letter) {
	children.push_back(new trieNode(letter));
}

void trieNode::makeWord() {
	this->isWord = true;
}