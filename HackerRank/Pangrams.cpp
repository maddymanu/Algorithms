#include <iostream>
#include <string>
#include <unordered_set>
#include <cmath>
#define sz(x) ((int)x.size())

using namespace std;

int main() {
	string str;
	cin >> str;
	unordered_set<char> map;
	for(auto ch : str) {
		if(ch == ' ')
			continue;
		map.insert(tolower( ch ));
	}
	if(sz(map) == 26)
		cout << "pangram" << endl;
	else
		cout << "not pangram" << endl;

	return 0;
}