//Div2 250ptrs

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class PairingPawns
{
public:
	int savedPawnCount(vector<int> start) {
		int ans = start[0];
		for(int i=1 ; i<start.size() ; i++) {
			int curr = start[i];
			for(int j=i ; j>0 ; j--) {
				curr = curr/2;
			}
			ans += curr;
		}
		return ans;
	}
	
};

class TheSimpleGame
{
public:
	int count(int n, vector<int> x, vector<int> y) {
		int res = 0;
		int cx[4] = {1,1,n,n};
		int cy[4] = {1,n,1,n};
		for(int i=0 ; i<x.size() ; i++) {
			int dist =  10000;
			for(int j=0 ; j<4 ; j++) {
				dist = min(dist , abs(x[i] - cx[j]) + abs(y[i] - cy[j]));
			}
			res += dist;
		}
		return res;
	}
	
};

//Leaving Math, Simple Math, Geometry, and Advanced math for now.

//Leave for now.