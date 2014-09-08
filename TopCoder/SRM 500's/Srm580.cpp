#include <vector>
#include <iostream>

using namespace std;

//Div2 250
class ShoutterDiv2
{
public:
	int count(vector <int> s, vector <int> t) {
		int ct = 0;
		for(int i=0 ; i<s.size()-1 ; i++) {
			for(int j=i+1 ; j<s.size() ; j++) {
				if((s[j] <= t[i]) && s[i] <= t[j] ) {
					ct++;
				}
			}
		}
		return ct;
	}
	
};