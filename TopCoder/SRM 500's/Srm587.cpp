#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class InsertZ
{
public:
	string canTransform( string init, string goal ) {
		string s = "";
		for (int i = 0; i < goal.size(); i++) {
        	if(goal[i] != 'z') {
            	s += goal[i];
        	}
    	}

		if(init == s) {
			return "Yes";
		} else {
			return "No";
		}
	}
	
};