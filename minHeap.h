#pragma once
#include <vector>

class MinHeap
{
private:
	int length;
	std::vector<int> heap;

public:
	MinHeap();
	int get(int index);
	int size();
	void add(int val);
	int peek();
};
