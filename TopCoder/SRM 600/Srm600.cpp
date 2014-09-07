#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

//Div2 250
class TheShuttles
{
public:
	int getLeastCost(vector<int> cnt, int baseCost, int seatCost) {
		int res = numeric_limits<int>::max();
		for(int x=1 ; x<=100 ; x++) {
			int n = 0;
			for(int c : cnt) {
				n+= (c+(x-1))/x;
			}
			int cost = n*baseCost+ n*x*seatCost;
			res = min(res, cost);
		}
		return res;
	}
	
};