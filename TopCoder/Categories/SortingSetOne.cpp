#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

//srm 468 Div2 250
class RoadOrFlightEasy
{
public:
	int minTime(int N, vector<int> roadTime, vector<int> flightTime, int K) {
		vector<int> sparedTime(N);
		for(int i=0 ; i<N ; i++) {
			sparedTime[i] = roadTime[i] - flightTime[i];
		}
		int res = 0;
		for(int i=0 ; i<N ; i++) {
			res += roadTime[i];
		}
		sort(sparedTime.rbegin() , sparedTime.rend());
		for(int i=0 ; i<K ; i++) {
			res -= max(0, sparedTime[i]);
		}

		return res;
	}
	
};

//Srm 445 Div2 250
class TheEncryptionDivTwo
{
public:
	string encrypt(string message) {
		string result = "";
		map <char , char> mapping;
		char next = 'a';
		for(int i=0 ; i<message.size() ; i++) {
			if(!mapping[message[i]]) {
				mapping[message[i]] = next++;
			}
			result += mapping[message[i]];
		}
		return result;
	}
	
};


//Srm Div2 250

class TwoWaysSorting
{
public:
	string sortingMethod(vector<string> stringList) {
		bool isLex = true, isLen = true;
		for(int i=0 ; i<stringList.size() - 1 ; i++) {
			if(stringList[i+1] < stringList[i] ) {
				isLex = false;
			}
			if(stringList[i+1].size() < stringList[i].size()) {
				isLen = false;
			}
		}

		if (isLex && isLen) {
	        return "both";
	    } else if (isLex) {
	        return "lexicographically";
	    } else if (isLen) {
	        return "lengths";
	    } else {
	        return "none";
	    }
	}
	
};

//Srm 520 Div2 250
class SRMRoomAssignmentPhase
{
public:
	int countCompetitors(vector<int> ratings, int K) {
		int x = 0;
		int own = ratings[0];
		for(int i=1 ; i<ratings.size() ; i++) {
			if(ratings[i] > own)
				x++;
		}
		return x/k;
	}
	
};


//Srm 391 Div2 250

class SnowyWinter {
public:
	 int snowyHighwayLength(vector <int> startPoints, vector <int> endPoints) {
	 	for(int i=0 ; i<startPoints.size()-1 ; i++) {
	 		for(int j=i+1 ; j<startPoints.size() ; j++){
	 			if(startPoints[i] > startPoints[j]) {
	 				swap(startPoints[i] , startPoints[j]);
	 				swap(endPoints[i] , endPoints[j]);
	 			}
	 		}
	 	}

	 	int res = 0;
	 	for(int i=0 ; i<startPoints.size() ; i++) {
	 		int sp = startPoints[i];
	 		int ep = endPoints[i];
	 		for(; i<startPoints.size() && startPoints[i] <= ep ; i++) {
	 			ep = max(ep, endPoints[i]);
	 		}
	 		i--;
	 		res += ep - sp;
	 	}
	 	return res;
	 }
};



































