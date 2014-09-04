#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Div 2 - 250 */

class TaroString {
public:
	string getAnswer(string S) {
		string r="";
		for(char ch: S) {
			if((ch == 'C') || (ch == 'A') || (ch == 'T')) {
				r += ch;
			}
		}
		return (r == "CAT" ) ? "Possible": "Impossible";
	}
};

/* Div 2 500 */