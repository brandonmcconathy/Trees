#pragma once
#include "trieNode.h"
#include <vector>
#include <string>

class Trie
{
private:
	std::vector<bool> chars;

public:
	std::vector<trieNode*> children;

	Trie();
	void add(std::string word);
};
