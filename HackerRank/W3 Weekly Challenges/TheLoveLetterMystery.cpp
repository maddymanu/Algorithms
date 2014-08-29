#include <iostream>
#include <string>
using namespace std;

int main() {
	int T ; 
	cin >> T;
	string str;
	while(T--) {
		cin >> str;
	
		int count = 0;
		for(int i=0 ; i<str.length()/2 ; i++) {
			count += abs(str[i] - str[str.length()-i-1]);
		}
		cout << count << endl;
	}	
	return 0;
 }