#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdio.h>

using namespace std;

//Div2 500
class Library {
public:
	int documentAccess(vector<string> records, vector<string> userGroups, vector<string> roomRights) {
		vector<string> names , rooms, users;
		int N = records.size();
		for(int i=0 ; i<N; i++) {
			stringstream ss(records[i]);
			string s;
			ss >> s;
			names.push_back(s);
			ss >> s;
			rooms.push_back(s);
			ss >> s;
			users.push_back(s);
		}
		set<string> ret;
		for(int i=0 ; i<N ; i++) {
			if (find(userGroups.begin(), userGroups.end() , users[i]) == userGroups.end())
			{
				continue;
			}
			if (find(roomRights.begin(), roomRights.end() , rooms[i]) == roomRights.end()) 
			{
				continue;
			}
			ret.insert(names[i]);
		}
		return ret.size();
	}
};





















