#include "trie.h"
#include "trieNode.h"
#include <string>
#include <iostream>

Trie::Trie() {
	for (int i = 97; i < 123; ++i) {
		children.push_back(new trieNode(char(i)));
	}
}

void Trie::add(std::string word) {
	if (word.size() < 1) {
		return;
	}
	trieNode* currNode = children[word[0] - 97];
	for (int i = 1; i < word.size(); ++i) {
		if (currNode->checkChildren(word[i])) {
			currNode = currNode->getChild(word[i]);
		}
		else {
			currNode->addChild(word[i]);
			currNode = currNode->getChild(word[i]);
		}
	}
	currNode->makeWord();
}

void Trie::traverse(trieNode* node) {
	std::cout << node->get() << std::endl;
	for (trieNode* curr : node->children) {
		traverse(curr);
	}
}

void Trie::print() {
	for (trieNode* node : children) {
		traverse(node);
	}
}

void Trie::wordTraverse(trieNode* node, std::string word) {
	word = word + node->get();
	if (node->checkWord()) {
		std::cout << word << std::endl;
	}
	for (trieNode* curr : node->children) {
		wordTraverse(curr, word);
	}
}

void Trie::printWords() {
	for (trieNode* node : children) {
		std::string word = "";
		wordTraverse(node, word);
	}
	return;
}