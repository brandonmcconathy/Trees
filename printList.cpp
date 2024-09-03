#include "printList.h"
#include <vector>
#include <iostream>

void printList(std::vector<int> list) {
	for (int num : list) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}