#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TwoWaysSorting {
public:
	string sortingMethod(vector<string> stringList) {
		bool lex = true;
		bool len = true;
		int n = stringList.size();
		for(int i=0 ; i<n-1 ; i++) {
			lex = lex && (stringList[i] <= stringList[i+1]);
			len = len && (stringList[i].length() <= stringList[i+1].length());
		}

		if(lex && len) {
			return "both";
		} else if (lex && !len) {
			return "lexicographically";
		} else if(len && !lex) {
			return "lengths";
		} else {
			return "none";
		}

	}
};