#include <vector>

using namespace std;

class WakingUpEasy {
public:
	int countAlarms(vector<int> volume, int S) {
		int i, n=volume.size();
		for(i=0 ; S>0 ; i++) {
			S = S - volume[i%n];
		}
		return i;
	}
};