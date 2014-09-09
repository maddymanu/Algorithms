#include <vector>

using namespace std;

//Div2 250
class SkiResortsEasy
{
public:
	int minCost(vector <int> altitude) {
		int cost = 0;
		int min = altitude[0];
		for(int i = 1 ; i<altitude.size() ; i++) {
			if(altitude[i] > min) {
				cost += altitude[i] - min;
			} else {
				min = altitude[i];
			}
		}
		return cost;
	}
	
};