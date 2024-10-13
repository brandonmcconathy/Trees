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

void Trie::deleteWord(std::string word) {
	if (word.size() < 2) {
		return;
	}

	// If last letter in word has a child do not delete anything
	// Remove nextLetter from children of lastCommonNode

	trieNode* currNode = children[word[0] - 97];
	std::vector<trieNode*> nodesToDelete;
	trieNode* lastCommonNode = currNode;
	char nextLetter = word[1];

	for (int i = 1; i < word.size(); ++i) {
		if (currNode->children.size() == 1 && i > 1) {
			nodesToDelete.push_back(currNode);
			currNode = currNode->children[0];
		}
		else {
			lastCommonNode = currNode;
			nodesToDelete.clear();
			bool found = false;
			for (trieNode* child : currNode->children) {
				if (child->get() == word[i]) {
					found = true;
					currNode = child;
				}
			}
			if (!found) {
				return;
			}
		}
	}
	lastCommonNode->children.clear();
	for (trieNode* node : nodesToDelete) {
		delete node;
	}
}

void Trie::traverse(trieNode* node, std::string word) {
	word = word + node->get();
	if (node->checkWord()) {
		std::cout << word << std::endl;
	}
	for (trieNode* curr : node->children) {
		traverse(curr, word);
	}
}

void Trie::print() {
	for (trieNode* node : children) {
		std::string word = "";
		traverse(node, word);
	}
}