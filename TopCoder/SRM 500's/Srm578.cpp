#include <vector>
#include <iostream>
#include <string>

using namespace std;

//Div2 250
class DeerInZooDivTwo
{
public:
	vector<int> getminmax(int N, int K) {
		
		vector<int> result;
		int total = 2*N;
		int remaining = total - K;

		if(remaining <= N) {
			result.push_back(0);
		} else {
			result.push_back(remaining - N);
		}

		result.push_back(remaining/2);

		return result;

	}
	
};