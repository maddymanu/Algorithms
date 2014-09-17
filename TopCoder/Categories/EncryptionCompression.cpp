#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <stdio.h>

using namespace std;

//Div2 250
class MorselikeCode
{
public:
	string decrypt(vector<string> library, string message) {
		map<string , char> mp;
		for(int i=0 ; i<library.size() ; i++) {
			stringstream ss(library[i]);
			string code;
			char ch;
			ss >> ch >> code;
			mp[code] = ch;
		}
		string res= "";
		stringstream ss(message);
		string s;
		while(ss >> s) {
			if(mp[s]) {
				res += mp[s];
			} else{ 
				res += "?";
			}
		}
		return res;
	}
	
};


class CCipher {
public:
	string decode(string cipherText, int shift) {
		for(int i=0 ; i<cipherText.length() ; i++) {
			char c = (cipherText[i] - shift);
			if(c < 'A') {
				c+= 26;
			}
			cipherText[i] = c;
		}
		return cipherText;
	}	
	
};




//Done with Div2 250!!! (Only 2 problems.)































