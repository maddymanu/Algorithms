#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div2 250
class EasyHomework
{
public:
	string determineSign(vector <int> A) {
		int neg = 0;
		for(int i=0 ; i<A.size() ; i++) {
			if(A[i] == 0) {
				return "ZERO";
			} else if (A[i] < 0) {
				neg++;
			}
		}
		return (neg%2 == 1) ? "NEGATIVE" : "POSITIVE";
	}
	
};

//Div2 500

class NextOrPrev
{
public:
	int getMinimum(int nextCost, int prevCost, string start, string goal) {
		int n = start.length();

		//sorting the strings.
		for (int i=0; i<n; i++) {
	        for (int j=i+1; j<n; j++) {
	            if ( start[j] < start[i] ) {
	                swap(start[j], start[i]);
	                swap(goal[j], goal[i]);
	            }
	        }
    	}

    	int cost = 0;
    	for(int i=0 ; i<n ; i++) {
    		if((i!=0) && (goal[i] <= goal[i-1])) {
    			return -1;
    		}

    		if(start[i] < goal[i]) {
    			cost += nextCost*(goal[i] - start[i]);
    		} else {
    			cost += prevCost*(start[i] - goal[i]);
    		}
    	}

    	return cost;

	}
	
};






























