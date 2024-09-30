#include "maxHeap.h"
#include <iostream>

MaxHeap::MaxHeap() {
	length = 0;
}

int MaxHeap::get(int index) {
	return heap[index];
}

int MaxHeap::size() {
	return length;
}

void MaxHeap::add(int val) {
	heap.push_back(val);

	int index = length;
	int parentIdx = (index - 1) / 2;

	while (index != 0 && heap[parentIdx] < val) {
		int temp = heap[parentIdx];
		heap[parentIdx] = heap[index];
		heap[index] = temp;
		index = parentIdx;
		parentIdx = (index - 1) / 2;
	}
	length++;
}

int MaxHeap::peek() {
	if (length == 0) {
		return -1;
	}
	return heap[0];
}

void MaxHeap::pop() {
	return;
}

void MaxHeap::printList() {
	for (int i = 0; i < length; ++i) {
		std::cout << heap[i] << ", ";
	}
	std::cout << std::endl;
}