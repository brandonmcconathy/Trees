#pragma once
#include <vector>

class MaxHeap
{
private:
	int length;
	std::vector<int> heap;

public:
	MaxHeap();
	int get(int index);
	int size();
	void add(int val);
	int peek();
	void pop();
	void printList();
};
