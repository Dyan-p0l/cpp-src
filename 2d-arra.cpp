#include <iostream>
int main(){
	
	int n;
	
	std::cout << "Enter the number of rows: ";
	std::cin >> n;
	
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < 2*n-1; j++) {
			if (j >= n - (i - 1) && j <= n + (i - 1) ) {
				std::cout << "*";
			}else{
				std::cout << " ";
			}
		}
		std::cout << '\n';
	}
	
	
	return 0;
	
}