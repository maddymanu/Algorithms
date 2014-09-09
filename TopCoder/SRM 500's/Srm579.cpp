#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//Div2 250
class PrimalUnlicensedCreatures
{
public:
	int maxWins(int level, vector <int> grezPower) {
		sort(grezPower.begin(), grezPower.end());
		int ct = 0;
		for(int i=0 ; i<grezPower.size() ; i++) {
			if (level > grezPower[i])
			{
				level += grezPower[i]/2;
				ct++;
			} else {
				break;
			}
		}
		return ct;
	}
	
};