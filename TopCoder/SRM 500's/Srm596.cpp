#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

//Div2 250
class FoxAndSightseeing
{
public:
	int getMin(vector<int> position) {
		int res = 1000000;
		for(int skip =1 ; skip < position.size()-1 ; skip++) {
			int last = position[0];
			int dist = 0;
			for(int i=1 ; i<position.size() ; i++) {
				if(skip != i) {
					dist += abs(position[i]-last);
					last = position[i];
				}
			}
			res = min(res,dist);
		}
		return res;
	}
	
};

//Div2 500
class ColorfulRoad
{
public:
	int getMin(string road) {
		map<char,char> next = { {'R','G'}, {'G','B'}, {'B','R'} };
	    const int INF = 1000000;
	    int n = road.size();
	    int f[n];
	    f[n-1] = 0;
	    for(int i=n-2 ; i>=0 ; i++) {
	    	f[i] = INF;
	    	for(int j=i+1 ; j<n ; j++) {
	    		if(road[j] == next[road[i]]) {
	    			f[i] = std::min( f[i], (j - i)*(j - i) + f[j] );
	    		}
	    	}
	    }
	    return (f[0] >= INF) ? -1 : f[0];

	}
	
};



















