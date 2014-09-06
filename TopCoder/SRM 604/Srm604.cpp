#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//Div 2 250
class FoxAndWord
{
public:

	bool interesting(string s, string t) {
		for(int i=0 ; i<s.size() ; i++) {
			string a = s.substr(0, i);
			string b = s.substr(i);
			if(b+a == t) {
				return true;
			}
		}
		return false;
	}


	int howManyPairs(vector<string> words) {
		int c = 0;
		for(string a:words) {
			for(string b : words) {
				if(a<b) {
					if(interesting(a,b)) {
						c++;
					}
				}
			}
		}
		return c;
	}

	
};


//Div2 500
class PowerOfThreeEasy
{
public:
	string ableToGet(int x, int y, int p = 1) {
		if ((x>=0) && (y>=0) && (
			(x==0 && y==0) ||
			(ableToGet(x-p , y , p*3) == "Possible") ||
			(ableToGet(x , y-p , p*3) == "Possible")
			)
			)
		{
			return "Possible";
		} else {
			return "Impossible";
		}
	}
	
};






























