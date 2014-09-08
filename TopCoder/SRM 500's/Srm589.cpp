#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Div2 250
class GooseTattarrattatDiv2
{
public:
	int getmin(string S) {
		int n = S.length() , m = 0;
		for(char ch : S) {
			int c = 0;
			for(int i=0 ; i<n ; i++) {
				if(S[i] == ch) {
					c++;
				}
				m = max(m,c);
			}
		}
		return n-m;
	}
	
};

class GearsDiv2
{
public:
	int getmin(string Directions) {
		int n = Directions.length();
		if(n<=0) {
			return 0;
		} else if(Directions[0] == Directions[1]) {
			return 1 + getmin(Directions.substr(1));
		} else {
			return getmin(Directions.substr(0));
		}
	}
	
};