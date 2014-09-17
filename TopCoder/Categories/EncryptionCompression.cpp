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


//Div2 500ptrs

class SuperRot
{
public:
	string decoder(string message) {
		int n = message.size();
		for(int i=0 ; i<n ; i++) {
			if(message[i] >= 'A' && message[i] <= 'M') {
				message[i] += 13;
			}
			if(message[i] >= 'N' && message[i] <= 'Z') {
				message[i] -= 13;
			}

			if(message[i] >= 'a' && message[i] <= 'm') {
				message[i] += 13;
			}
			if(message[i] >= 'n' && message[i] <= 'z') {
				message[i] -= 13;
			}

			if(message[i] >= '0' && message[i] <= '4') {
				message[i] += 5;
			}
			if(message[i] >= '5' && message[i] <= '9') {
				message[i] -= 5;
			}
		}
		return message;
	}
	
};


























