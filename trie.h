#pragma once
#include "trieNode.h"
#include <vector>
#include <string>

class Trie
{
private:

public:
	std::vector<trieNode*> children;

	Trie();
	void add(std::string word);
};
