#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div 2 - 250

class EllysSubstringSorter
{
public:
	string getMin(string S, int L) {
		string res = S;
		for(int i=0 ; i+L <= S.length() ; i++) {
			string t = S;
			sort(t.begin()+ i, t.end() +i+L);
			res = min(res, t);
		}
		return res;
	}
	
};