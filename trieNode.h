#pragma once
#include <vector>

class trieNode
{
private:
	char val;
	std::vector<trieNode*> children;
	bool isWord;

public:
	trieNode(char val);
	char get();
};