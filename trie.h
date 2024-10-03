#pragma once
#include "trieNode.h"
#include <vector>

class Trie
{
private:

public:
	std::vector<trieNode*> children;
	Trie();
};
