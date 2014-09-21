//Div1 250 pointers.

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;

class MergersDivOne
{
public:
	double findMaximum(vector<int> revenues) {
		sort(revenues.begin(), revenues.end());
		double result = revenues[0];
		for(int rev : revenues) {
			result = (result+rev)/2.0;
		}
		return result;
	}
	
};






/* Do Later
	* OneFight 1000ptr Div2
	* TallPeople
*/