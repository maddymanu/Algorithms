#include <string>
#include <iostream>

using namespace std;

//Div2 250
class FoxAndHandleEasy
{
public:
	string isPossible(string S, string T) {
		for(int i=0 ; i<S.length() ; i++) {
			string V = S.substr(0,i) + S + S.substr(i);
			if(V==T) {
				return "YES";
			}
		}

		return "NO";
	}
	
};