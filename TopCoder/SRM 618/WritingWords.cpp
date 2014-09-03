#include <iostream>
#include <string>
using namespace std;

class WritingWords {
public:
	int write(string word) {
		int res = 0;
		for(int i=0 ; i<word.length() ; i++) {
			res += (int)(word.at(i)-'A') + 1;
		}
		return res;
	}
};