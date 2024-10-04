#pragma once
#include <vector>

class trieNode
{
private:
	char val;
	bool isWord;

public:
	std::vector<trieNode*> children;

	trieNode(char val);
	char get();
	bool checkChildren(char letter);
	trieNode* getChild(char letter);
	bool checkWord();
	void addChild(char letter);
	void makeWord();
};