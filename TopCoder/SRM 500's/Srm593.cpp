#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Div2 250
class RaiseThisBarn
{
public:
	
	int calc(string str) {
		int c = 0;
		for(int i=1 ; i<str.size();i++) {
			string a = str.substr(0,i);
			string b = str.substr(i);

			if(count(a.begin(), a.end() , 'c') == count(b.begin(), b.end() , 'c'))
				c++;
		}
		return c;
	}
	
};

//Div2 500
class WolfDelaymaster
{
public:
	string check(string str) {
		int i=0;
		int len = str.length();
		while(i<len) {
			if(str[i] != 'w') {
				return "INVALID";
			}

			int r = 0;
			while((i<len) && (str[i] == 'w')) {
				r++;
				i++;
			}

			char chars[3] = { 'o', 'l', 'f' }; 
			for(char ch:chars) {

				for(int k=0 ; k<r ; k++) {
					if((i>=len) || (str[i] != ch))
						return "INVALID";
					i++;
				}
			}
		}
		return "VALID";
	}
	
};




















