#include <vector>
#include <iostream>

using namespace std;

//Div2 500
class EllysRoomAssignmentsDiv2
{
public:
	double getProbability(vector<int> ratings) {
		int N = ratings.size();
		int elly = 0;
		for(int i=1 ; i<N ; i++) {
			if(ratings[i] > ratings[0]) {
				elly++;
			}
		}

		if(elly == 0) {
			return 1.0;
		}

		int R = (N+19)/20;

		if(elly < R) {
			return 0.0;
		}

		return 1.0/R;
	}
	
};