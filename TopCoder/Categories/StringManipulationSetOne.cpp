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