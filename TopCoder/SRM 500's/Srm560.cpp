#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Div 2 500
class TomekPhone
{
public:
	int minKeystrokes(vector<int> frequencies, vector<int> keySizes) {
		int count = 0;
		for(int keySize : keySizes){
			count += keySize;
		}
		if(count < frequencies.size()) {
			return -1;
		}

		vector<int> costs(count);
		int cur = 0;
		for(int keySize : keySizes) {
			for(int i= 1 ; i<= keySize ; i++) {
				costs[cur++] = i;
			}
		}

		sort(costs.begin(), costs.end());
		sort(frequencies.begin(), frequencies.end());
		int result = 0;
		for(int i=0 ; i<frequencies.size() ; i++) {
			result += costs[i]*frequencies[frequencies.size()-1-i];
		}
		return result;
	}
	
};