#include "minHeap.h"
#include <iostream>

MinHeap::MinHeap() {
	length = 0;
}

int MinHeap::get(int index) {
	return heap[index];
}

int MinHeap::size() {
	return length;
}

void MinHeap::add(int val) {
    heap.push_back(val);

    int index = length;
    int parentIdx = (index - 1) / 2;

    while (index != 0 && heap[parentIdx] > val) {
        int temp = heap[parentIdx];
        heap[parentIdx] = val;
        heap[index] = temp;
        index = parentIdx;
        parentIdx = (index - 1) / 2;
    }
    length++;
}

int MinHeap::peek() {
    if (length == 0) {
        return -1;
    }
    return heap[0];
}

void MinHeap::printList() {
    for (int i = 0; i < length; ++i) {
        std::cout << heap[i] << ", ";
    }
    std::cout << std::endl;
}