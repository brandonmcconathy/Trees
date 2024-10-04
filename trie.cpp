#include "trie.h"
#include "trieNode.h"
#include <string>

Trie::Trie() {
	for (int i = 97; i < 123; ++i) {
		children.push_back(new trieNode(char(i)));
	}
}

void Trie::add(std::string word) {
	return;
}