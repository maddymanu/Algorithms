#include <iostream>
#include <string>
using namespace std;

#define MOD7 1000000007

int main() {
	string s, sub;
	cin >> s;

	int len = s.length();
	unsigned long long output = s[0]-'0';
	unsigned long long temp = s[0]-'0';

	for(int i=1 ; i< len ; i++) {
		temp = temp*10 + (i+1)*(s[i] - '0');
		temp = temp%MOD7;

		output = (output +temp)%MOD7;
	}
	cout << output << endl;
	return 0;
}