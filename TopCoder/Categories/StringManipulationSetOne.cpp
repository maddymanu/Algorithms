#include <string>
#include <vector>
#include <iostream>

using namespace std;

class StreetParking {
public:
	int freeParks(string st) {
		int i,count = 0;
		for(i = 0 ; i<st.size() ; i++) {
			int flag = 0;
			if(st[i] == '-') {
				if(i+1 < st.length() && (st[i+1] == 'B' || st[i+1] == 'S')) {
					flag=1;
				}
				if(i-1 >=0 && st[i-1] == 'S') {
					flag = 1;
				}
				if(i+2 < st.length()&&st[i+1] == 'B') {
					flag = 1;
				}
				if(flag == 0) {
					count++;
				}
			}
		}
		return count;
	}
};

class SignatureDecorator
{
public:
	string applyDecoration(String name, vector<string> commands, vector<string> decorations) {
		string ans = name;
		for(int i=0 ; i<commands.size() ; i++) {
			if(commands[i] == "surround") {
				ans = decorations[i]+ans+decorations[i];
			} else if(commands[i] == "append") {
				ans = ans+decorations[i];
			} else {
				ans = decorations[i]+ans;
			}
		}
		return ans;
	}
	
};




//Done uptil Div2 250. Start With Div2 500s.




















