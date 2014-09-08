#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//Div2 250
class LISNumberDivTwo
{
public:
	int calculate(vector <int> seq) {
		int count = 1 , n = seq.size();
		int new_min = seq[0];
		for(int i=1 ; i<n ; i++) {
			if(seq[i] <= new_min) {
				new_min = seq[i];
				count++;
			} else {
				new_min = seq[i];
			}
		}
		return count;
	}
	
};