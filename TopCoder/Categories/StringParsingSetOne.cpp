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

class TitleString
{
public:
	string toFirstUpperCase(string title) {
		for(int i=0 ; i<title.size() ; i++) {
			if((i==0 || title[i-1] != ' ') && title[i] != ' ') {
				title[i] = toupper(title[i]);
			}
		}
		return title;
	}	
	
};



class DietPlan
{
public:
	string chooseDinner(String diet, String breakfast, String lunch) {
		string x = breakfast+lunch;
		for(int i=0 ; i<x.size() ; i++) {
			if(diet.find(x[i]) == string::npos) {
				return "CHEATER";
			}
		}
		sort(diet.begin(), diet.end());
		string rv ="";
		for(int i=0 ; i<diet.size() ; i++) {
			if(x.find(diet[i]) == string::npos) {
				rv += diet[i];
			}
		}
		return rv;
	}
	
};



class VLNString
{
public:
	string makeAcronym(string longName) {
		istringstream str(longName);
		string s ; 
		string ret = "";
		while(str >> s) {
			if((s == "and") || (s=="the") || (s="of")) {

			} else {
				ret += toupper(s[i]);
			}
		}
		return ret;
	}
	
};



//Done



























