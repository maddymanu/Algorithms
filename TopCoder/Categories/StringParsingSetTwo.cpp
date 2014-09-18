#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdio.h>

using namespace std;

class OldestOne
{
public:
	string oldest(vector<string> data) {
		int maxOld = -1;
		int n = data.size() ;
		string res = "";

		for(int i=0 ; i<n ; i++) {
			string s = data[i];
			s = s.substr(s.find_first_not_of(' '));
			int idx = 0;

			for(int j=0 ; j<s.size() ; j++) {
				if(s[j] >= '0' && s[j] <= '9'){
					idx = j;
					break;
				}
			}

			string name = s.substr(idx);
			name = name.substr(0, name.find_last_not_of(' ') + 1);
			string age = s.substr(idx , s.find(' ' , idx) - idx);
			stringstream iss(age);
			int a;
			iss>>a;
			if(a > maxOld) {
				res = name;
				maxOld = a;
			}

		}

		return name;
	}
	
};









































