#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;


class ManySquares {

	int howManySquares(vector <int> sticks) {
	map <int,int> cnt;
	for(int l: sticks) {
		cnt[l]++;
	}
	int res=0;
	for(auto x: cnt) {
		res+= x.second/4;
	}
	return res;
	}

};

