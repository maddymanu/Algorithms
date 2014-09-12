//Div2 500 pointers.

#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

class WordCompositionGame
{
public:
	string score(vector <string> a, vector <string> b, vector <string> c) {
		map<string, int> m ; 
		for(int i=0 ; i<a.size() ; i++) {
			m[a[i]]++;
		}
		for(int i=0 ; i<a.size() ; i++) {
			m[b[i]]++;
		}
		for(int i=0 ; i<a.size() ; i++) {
			m[c[i]]++;
		}
		int AA, BB, CC = 0;
		for(int i=0 ; i<a.size() ; i++) {
			AA += 4 - m[a[i]];
		}
		for(int i=0 ; i<b.size() ; i++) {
			BB += 4 - m[b[i]];
		}
		for(int i=0 ; i<c.size() ; i++) {
			CC += 4 - m[c[i]];
		}

		return AA+"/"+BB+"/"+CC;

	}
	
	
};




































