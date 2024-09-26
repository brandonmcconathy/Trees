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

void MinHeap::pop() {
    if (length == 0) {
        return;
    }
    length--;
    heap[0] = heap[length];
    heap.resize(length);

    int index = 0;
    int child1 = (index * 2) + 1;
    int child2 = (index * 2) + 2;

    while (index < length && child1 < length) {

        // Checks if all vals are in order
        if (child2 < length) {
            if (heap[child1] >= heap[index] && heap[child2] >= heap[index]) {
                return;
            }
        }
        else {
            if (heap[child1] >= heap[index]) {
                return;
            }
        }

        // Case of 2 children
        if (child2 < length) {
            int min = heap[child1] < heap[child2] ? child1 : child2;
            if (heap[index] > heap[min]) {
                int temp = heap[index];
                heap[index] = heap[min];
                heap[min] = temp;
                index = min;
                child1 = (index * 2) + 1;
                child2 = (index * 2) + 2;
            }
            else {
                return;
            }
        }

        // Case of 1 child
        else {
            int temp = heap[index];
            heap[index] = heap[child1];
            heap[child1] = temp;
            return;
        }
    }
}

void MinHeap::printList() {
    for (int i = 0; i < length; ++i) {
        std::cout << heap[i] << ", ";
    }
    std::cout << std::endl;
}