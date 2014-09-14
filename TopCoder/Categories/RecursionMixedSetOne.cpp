#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div2 250
class Truckloads
{
public:
	int numTrucks(int numCrates, int loadSize) {
		if(numCrates <= loadSize)
			return 1;
		return(numTrucks(numCrates/2 , loadSize) + numTrucks((numCrates+1)/2, loadSize));
	}
};

