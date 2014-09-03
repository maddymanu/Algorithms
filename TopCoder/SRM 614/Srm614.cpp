#include <iostream>
#include <vector>
using namespace std;

/* Div2 - 250 */

class MicroStrings {
	string makeMicroString(int A, int D)  {
		string ans ="";
		int i=1;
		while(true) {
			if((A- (i*D) >= 0)) {
				ans += A- (i*D);
				i++;
			} else {
				break;
			}
		}
		return ans;
	}
};


