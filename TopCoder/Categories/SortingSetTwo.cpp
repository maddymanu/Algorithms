//Div2 500 pointers.

#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

class WordCompositionGame
{
public:
	string score(vector <string> a, vector <string> b, vector <string> c) {
		map<string, int> m ; 
		for(int i=0 ; i<a.size() ; i++) {
			m[a[i]]++;
		}
		for(int i=0 ; i<a.size() ; i++) {
			m[b[i]]++;
		}
		for(int i=0 ; i<a.size() ; i++) {
			m[c[i]]++;
		}
		int AA, BB, CC = 0;
		for(int i=0 ; i<a.size() ; i++) {
			AA += 4 - m[a[i]];
		}
		for(int i=0 ; i<b.size() ; i++) {
			BB += 4 - m[b[i]];
		}
		for(int i=0 ; i<c.size() ; i++) {
			CC += 4 - m[c[i]];
		}

		return AA+"/"+BB+"/"+CC;

	}
	
	
};


class BuildingHeightsEasy
{
public:
	int minimum(int M, vector<int> heights) {
		const int INF = 1000000000;
    	int res = INF;

    	for(int x : heights) {
    		vector<int> costs;
    		for(int y : heights) {
    			if(y<=x){
    				costs.push_back(x-y);
    			}
    		}

    		if(costs.size() >= M) {
    			int currCost = 0;
    			sort(costs.begin(), costs.end());
    			for(int i=0 ; i<M ; i++) {
    				currCost += costs[i];
    			}
    			res = min(res , currCost);
    		}

    	}
    	return res;
	}
};

class GroceryBagger
{
public:
	int minimumBags(int strength, vector<string> itemType) {
		int m = strength;
		map <string, int> m;
		vector<string> s = itemType;
		m.clear();
		for(int i=0 ; i<itemType.size() ; i++) {
			m[s[i]]++;
		}
		map <string, int>::iterator it = m.begin();
		int ans = 0;
		for( ; it != m.end() ; it++) {
			int x = it->second;
			ans += (x+m-1)/m;
		}

		return ans;
	}
	
};









































