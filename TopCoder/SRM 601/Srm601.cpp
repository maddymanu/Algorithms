#include <iostream>
#include <vector>
#include <map>
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

//Div2 500
class WinterAndCandies
{
public:
	
	int getNumber(vector<int> type) {
		map <int,int> cnt;
		for(int x:type) {
			cnt[x]++;
		}
		int p=1;
		int sum = 0;
		for(int k=1 ; k<=type.size() ; k++ ) {
			p = p*cnt[k];
			sum += p;
		}
		return sum;
	}
	
};