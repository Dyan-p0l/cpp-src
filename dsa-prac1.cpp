#include <iostream>

int main() {
	int n = 5;
	
	int index;
	
	int numarr[n] = {1, 2, 3, 4, 5};
	
	std::cout << "Enter the index of the element you want to delete: ";
	std::cin >> index;
	
	if (index < n) {
		for (int i = index; i < n - 1; i++) {
			numarr[i] = numarr[i+1];
		}
		n--;
		std::cout << "Updated elements of the array after deletion at index " << index << " :";
		for (int i = 0; i < n; i++) {
			std::cout << numarr[i]<< " ";
		}
	}
	else{
		std::cout << "Invalid index" << "\n";
		std::cout << "Elements of the array:";
		for (int i = 0; i < n; i++) {
			std::cout << numarr[i]<< " ";
		}
	}
	
}