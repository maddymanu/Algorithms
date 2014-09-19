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




class BusinessTasks
{
public:
	string getTask(vector<string> list, int n) {
		int curr = 0;
		while(list.size() > 1){
			curr += n-1;
			curr = curr%list.size();
			list.erase(list.begin() + curr);
		}
		return list[0];
	}
		
};


class TheTournament
{
public:
	string findLeader(vector<string> matches) {
		map<string, int> w, t;
		for(int i=0 ; i<matches.size() ; i++) {
			stringstream ss(matches[i]);
			string win, nouse, lose;
			ss >> win >> nouse >> lose;
			w[win]++;
			t[win]++;
			t[lose]++;
		}

		int num = 0, den=1;
		string ret = "";
		for(auto it = w.begin() ; it != w.end() ; it++) {
			if(num*t[it->first] < den*w[it->first]) {
				ret = it->first;
				num = w[it->first];
				den = t[it->first];
			}
		}
	}
};

































