#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

//Div2 250
class CucumberMarket
{
public:
	string check(vector <int> price, int budget, int k) {
		sort(price.rbegin() , price.rend());
		int mx = 0;
		for(int i=0 ; i<k ; i++) {
			mx+= price[i];
		}

		if(mx > budget) {
			return "NO";
		} else {
			return "YES";
		}
	}
	
};