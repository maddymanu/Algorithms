#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class FoxAndVacation
{
public:
	int maxCities(int total, vector <int> d) {
		sort(d.begin(), d.end());
		int count = 0;
		int i=0;
		while(true) {
			if(total >= d[i]) {
				count++;
				total -= d[i];
				i++;
			} else {
				break;
			}
		}
		return count;
	}
	
};