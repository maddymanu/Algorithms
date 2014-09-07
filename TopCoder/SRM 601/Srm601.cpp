#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Div2 250
class WinterAndMandarins
{
public:
	
	int getNumber(vector<int> bags, int K) {
		sort(bags.begin(), bags.end());
		int n = bags.size();
		int res =  numeric_limits<int>::max();
		for(int i=0 ; i+K <= n ; i++) {
			res = min(res, bags[i+K-1] - bags[i]);
		}
		return res;

	}
	
};