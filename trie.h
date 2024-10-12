#pragma once
#include "trieNode.h"
#include <vector>
#include <string>

class Trie
{
private:
	void traverse(trieNode* node, std::string word);

public:
	std::vector<trieNode*> children;

	Trie();
	void add(std::string word);
	void deleteWord(std::string word);
	void print();
};
