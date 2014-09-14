//Div2 500 pointers.

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
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

//DO MORE DIV 2 500s ---- from Success rate 72%


struct food
{
	int prot;
	int carb;
	int ft;
	int cal;
	int id;
};

string gl;
bool info_sorter(const food &lhs , const food &rhs) {
	int lim = gl.length();
	for(int i=0 ; i<lim ; i++) {
		if(gl[i] == 't') {
			if(lhs.cal != rhs.cal) {
				return lhs.cal < rhs.cal;
			}
		}
		if(gl[i] == 'T') {
			if(lhs.cal != rhs.cal) {
				return lhs.cal > rhs.cal;
			}
		}
		if(gl[i] == 'c') {
			if(lhs.cal != rhs.cal) {
				return lhs.carb < rhs.carb;
			}
		}
		if(gl[i] == 'C') {
			if(lhs.cal != rhs.cal) {
				return lhs.carb > rhs.carb;
			}
		}
		if(gl[i] == 'p') {
			if(lhs.cal != rhs.cal) {
				return lhs.cal < rhs.cal;
			}
		}
		if(gl[i] == 't') {
			if(lhs.cal != rhs.cal) {
				return lhs.cal < rhs.cal;
			}
		}
	}
}

class HealthFood {
public:
	vector<int> selectMeals(vector<int> protein, vector<int> carbs, vector<int> fat, vector<int> dietPlans) {
		vector<int> calories;
		int lim = protein.size();
		for(int i=0 ; i<lim ; i++) {
			calories.push_back(5*carbs[i] + 5*protein[i] + 9*fat[i]);
		}
		vector<food> myFood;
		food f;
		for(int i=0 ; i<lim ; i++) {
			f.id =i;
			f.cal = calories[i];
			f.prot = protein[i];
			f.ft = fat[i];
			f.carb = carbs[i];
			myFood.push_back(f);
		}
		vector<int> ans;
		lim = dietPlans.size();
		for(int i=0 ; i<lim ; i++) {
			gl = dietPlans[i];
			sort(myFood.begin(), myFood.end() , &info_sorter);
			ans.push_back(myFood[0].id);
		}

	}
};



struct country
{
	string name;
	int g,s,b;
};

bool mycmp(struct country a, struct country c) {
	if(a.g != c.g) {
		return a.g < c.g;
	}
	if(a.s != c.s) {
		return a.s < c.s;
	}
	if(a.b != c.b) {
		return a.b < c.b;
	}
	return a.name < c.name;
}


class MedalTable
{
public:
	vector<string> generate(vector<string> results) {
		set<string> s;
		set<string>::iterator it;
		string str1, str2, str3;
		for(int i=0 ; i<results.size() ; i++) {
			stringstream ss(results[i]);
			ss >> str1 >> str2 >> str3;
			s.insert(str1);
			s.insert(str2);
			s.insert(str3);
		}

		vector<country> v;
		for(it = s.begin() ; it != s.end() ; it++) {
			struct country c;
			c.name = *it;
			c.g=c.s=c.b  =0;
			v.push_back(c);
		}

		for(int i=0 ; i<results.size() ; i++) {
			stringstream ss(results[i]);
			ss >> str1 >>str2 >> str3;
			for(int j=0 ; j<v.size() ; j++) {
				if(v[j].name == str1) {
					v[j].g++;
				}
				if(v[j].name == str2) {
					v[j].s++;
				}
				if(v[j].name == str3) {
					v[j].b++;
				}

			}
		}
		sort(v.begin(), v.end() , mycmp);
		vector<string> res;
		for(int i=0 ; i<v.size() ; i++) {
			string str = v[i].name;
			str += " " + v[i].g + " " + v[i].s + " " + v[i].b;
			res.push_back(str);
		}

		return res;
	}
};


//Do lots mmore. Start from PAINTBALL. Div2 500 ptrs.
//Do more. 500 ptrs.Div2.
































