#include <iostream>
#include <vector>
using namespace std;

class AmebaDiv2 {
public:
	int simulate(vector <int> X, int A) {
		int n = X.size();
		int ans = A;
		for(int i=0 ; i<n ; i++) {
			if (X[i] == ans)
			{
				ans = ans+X[i];
			}
		}
		return ans;
	}
};

class LongLongTripDiv2 {
public:
	string isAble(long D, int T, int B) {
	if ( (D - T < 0) || ( (D - T)%(B - 1) != 0) || ( (D - T)/(B - 1) > T ) ) {
        return "Impossible";
    } else {    
        return "Possible";
    }
	}
};