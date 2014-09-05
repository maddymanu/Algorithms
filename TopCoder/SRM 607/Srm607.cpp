#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// Div2 250
class BoundingBox
{
public:
	int smallestArea(vector<int> X, vector<int> Y) {
		int minx = *min_element(X.begin(), X.end());
		int maxx = *max_element(X.begin(), X.end());
    	int miny = *min_element(Y.begin(), Y.end());
    	int maxy = *max_element(Y.begin(), Y.end());
    	return (maxx-minx) * (maxy - miny) ;
	}
	
};

//Div2 500

//