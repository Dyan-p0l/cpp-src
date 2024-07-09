#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

string compref(vector<string>& strs){
	
	if (strs.empty()) return "";
	
	string result;
	sort(strs.begin(), strs.end());
	
	string first = strs[0];
	string last  = strs[strs.size()-1];
	
	for (int i = 0; i < strs.size(); i++) {
		if (first[i] != last[i]) {
			break;
		}
		
		result = first.substr(0, i+1);
	}
	
	return result;
}


int main () {
	
	vector<string> strs;
	strs = {"flea","fled","flew","flex"};
	
	
	string result = compref(strs);
	
	cout << "Output: " << result;
	
	return 0;
}