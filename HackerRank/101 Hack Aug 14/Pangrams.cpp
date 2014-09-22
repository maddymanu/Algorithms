#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>


using namespace std;

int main(int argc, char const *argv[])
{
	string sentence;
	getline(cin , sentence);

	int A[26];
	for(int i=0 ; i<sentence.size() ; i++) {
		if(sentence[i] != ' ') {
			A[tolower(sentence[i]) - 'a']++;
		}
	}

	for(int i=0 ; i<A.size() ; i++) {
		if(A[i] == 0) {
			cout << "not pangram" << endl;
			return 0;
		}
	}

	cout << "pangram" << endl;
	return 0;
}