#include <iostream>

using namespace std;

int romanToInt(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
	
int romanToInt(string s) {
    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; --i) {
        int currentValue = romanToInt(s[i]);

        // If the current Roman numeral is smaller than the previous one, subtract its value
        if (currentValue < prevValue) {
            result -= currentValue;
        } else {
            result += currentValue;
        }

        prevValue = currentValue;
    }

    return result;
}


int main() {
	while(true){
		string romanNumeral;
	    cout << "Enter a Roman numeral: ";
	    cin >> romanNumeral;
	
	    int result = romanToInt(romanNumeral);
	    cout << "The integer equivalent is: " << result << endl;
	}
    

    return 0;
}
