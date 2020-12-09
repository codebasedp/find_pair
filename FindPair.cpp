#include <vector>
#include <iostream>

int main() {
	std::vector<int> myVec = { 7, 9, 1, 7, 8, 0, 9, 1, 8 };
	int counter = 0;
	for (std::vector<int>::iterator iterX = myVec.begin(); iterX != myVec.end(); ++iterX) {
		for (std::vector<int>::iterator iterY = myVec.begin(); iterY != myVec.end(); ++iterY) {
			if (*(iterX) == *(iterY)) {
				++counter;
			}
			if (counter == 2) {
				break;
			}
		}
		if (counter == 1) {
			std::cout << "The number doesn't has pair: " << *(iterX) << std::endl;
		}
		counter = 0;
	}

	return 0;
}