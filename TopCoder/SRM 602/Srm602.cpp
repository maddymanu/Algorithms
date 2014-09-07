#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Div2 250
class TypoCoderDiv2
{
public:
	int count(vector<int> rating) {
		int c = 0, x=500;
		for(int y: rating) {
			if((y>=1200) != (x>=1200)) {
				c++;
			}
			x = y;
		}
		return c;
	}
	
};

//Div2 500