#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class ColorfulCoinsEasy {
public:
	string isPossible(vector<int> values) {
		int n = values.size();
		std::vector<int> limits(n-1);
		for(int i=0 ; i<n-1 ; i++) {
			limits[i] = values[i+1]/values[i];
		}
		sort(limits.begin() , limits.end());

		for(int i=0 ; i<limits[i] ; i++) {
			if (i+1 >= limits[i])
			{	
				return "Impossible";
			}
		}
		return "Possible";
	}
};